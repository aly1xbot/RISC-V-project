import cocotb
from cocotb.triggers import RisingEdge

class AXIMemorySlave:
    def __init__(self, axi, size=4096):
        self.axi = axi
        self.mem = bytearray(size)
        # default outputs
        axi.awready.value = 0
        axi.wready.value = 0
        axi.bvalid.value = 0
        axi.bresp.value = 0
        axi.arready.value = 0
        axi.rvalid.value = 0
        axi.rlast.value = 0
        axi.rresp.value = 0
    async def start(self):
        cocotb.start_soon(self.write_channel())
        cocotb.start_soon(self.read_channel())



    #write channel
    async def write_channel(self):
        while True:
            await RisingEdge(self.axi.aclk)
            #
            # Wait AW
            #
            if not self.axi.awvalid.value:
                continue
            addr = int(self.axi.awaddr.value)
            self.axi.awready.value = 1
            await RisingEdge(self.axi.aclk)
            self.axi.awready.value = 0
            #
            # Receive burst
            #
            while True:
                await RisingEdge(self.axi.aclk)
                if self.axi.wvalid.value:
                    self.axi.wready.value = 1
                    data = int(self.axi.wdata.value)
                    self.mem[addr:addr+4] = data.to_bytes(4, "little")
                    addr += 4
                    if self.axi.wlast.value:
                        await RisingEdge(self.axi.aclk)
                        self.axi.wready.value = 0
                        break
            #
            # Send BRESP
            #
            self.axi.bvalid.value = 1
            self.axi.bresp.value = 0
            while not self.axi.bready.value:
                await RisingEdge(self.axi.aclk)
            self.axi.bvalid.value = 0


    async def read_channel(self):
        while True:
            await RisingEdge(self.axi.aclk)
            if not self.axi.arvalid.value:
                continue
            addr = int(self.axi.araddr.value)
            burst = int(self.axi.arlen.value) + 1
            self.axi.arready.value = 1
            await RisingEdge(self.axi.aclk)
            self.axi.arready.value = 0
            #
            # Send burst
            #
            for i in range(burst):
                data = int.from_bytes(
                    self.mem[addr:addr+4],
                    "little"
                )
                self.axi.rdata.value = data
                self.axi.rvalid.value = 1
                self.axi.rresp.value = 0
                self.axi.rlast.value = (i == burst-1)
                while not self.axi.rready.value:
                    await RisingEdge(self.axi.aclk)
                await RisingEdge(self.axi.aclk)
                self.axi.rvalid.value = 0
                addr += 4
            self.axi.rlast.value = 0

    async def reset(self):
        self.axi.awready.value = 0
        self.axi.wready.value = 0
        self.axi.bvalid.value = 0
        self.axi.arready.value = 0
        self.axi.rvalid.value = 0
        self.axi.rlast.value = 0

        while not self.axi.aresetn.value:
            await RisingEdge(self.axi.aclk)


    def write(self, addr, data: bytes):
        self.mem[addr:addr+len(data)] = data

    def read(self, addr, length):
        return bytes(self.mem[addr:addr+length])
    
    async def start(self):
        await self.reset()

        cocotb.start_soon(self.write_channel())
        cocotb.start_soon(self.read_channel())
    def load(self, addr, data: bytes):
        self.mem[addr:addr+len(data)] = data

    def write_word(self, addr, value):
        self.mem[addr:addr+4] = value.to_bytes(4, "little")

    def read_word(self, addr):
        return int.from_bytes(self.mem[addr:addr+4], "little")