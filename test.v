module test;
    reg clk;
    
    initial begin
        clk = 0;
        #10 $finish;
    end
    
    always #5 clk = ~clk;
    
    initial begin
        $dumpfile("test.vcd");
        $dumpvars(0, test);
    end
endmodule
