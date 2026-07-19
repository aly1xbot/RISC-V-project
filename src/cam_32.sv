module cam_32 #(
    parameter WORDS = 4
)(
    input logic clk,
    input logic rst_n,
    input logic write_enable,
    input logic [1:0] write_index,
    input logic [31:0] write_data,
    input logic [31:0] search_data,


    //output part
    output logic match,
    output logic [1:0] match_index



);


logic [31:0] mem [0:WORDS-1];
integer i;

//write 
always_ff @(posedge clk) begin
    if(!rst_n) begin
        for (i = 0; i<WORDS; i=i+1) begin
            mem[i]<=32'b0;
        end
    end
    else if (write_enable) begin
        mem[write_index] <= write_data;
    end
end


// search
always_comb begin
    match = 1'b0;
    match_index = 2'b00;

    for (int i=0;i<4;i++) begin
        if (mem[i] == search_data) begin
            match = 1'b1;
            match_index = i[1:0];
        end
    end
end




endmodule