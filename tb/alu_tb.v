`timescale 1ns/1ps

module alu_tb;
    reg [31:0] a, b;
    reg [2:0]  op;
    wire [31:0] result;
    
    alu uut(
        .a(a),
        .b(b),
        .op(op),        // 注意端口名是 op，不是 alu_op
        .result(result)
    );
    
    initial begin
        // 创建波形文件
        $dumpfile("sim/alu.vcd");
        $dumpvars(0, alu_tb);
        
        // 测试 ADD
        a = 5; b = 3; op = 3'b000;
        #10 $display("5 + 3 = %d", result);
        
        // 测试 SUB
        a = 10; b = 4; op = 3'b001;
        #10 $display("10 - 4 = %d", result);
        
        // 测试 AND
        a = 12; b = 5; op = 3'b010;
        #10 $display("12 & 5 = %d", result);
        
        // 测试 OR
        a = 12; b = 5; op = 3'b011;
        #10 $display("12 | 5 = %d", result);
        
        // 测试 XOR
        a = 12; b = 5; op = 3'b100;
        #10 $display("12 ^ 5 = %d", result);
        
        #20 $finish;
    end
endmodule
