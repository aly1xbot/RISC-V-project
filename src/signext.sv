module signext(
    input logic [24:0] raw_src,
    input logic [2:0] imm_source,

    output logic [31:0] immediate

);



always_comb begin
    case (imm_source)
        // for I-type 
        3'b000 : immediate = {{20{raw_src[24]}}, raw_src[24:13]};
        // For S-types
        3'b001 : immediate = {{20{raw_src[24]}},raw_src[24:18],raw_src[4:0]};
        // For B-types
        3'b010 : immediate = {{20{raw_src[24]}},raw_src[0],raw_src[23:18],raw_src[4:1],1'b0};
        // for J-type update
        3'b011 : immediate = {{12{raw_src[24]}}, 
                            raw_src[12:5],
                            raw_src[13],
                            raw_src[23:14],
                            1'b0};
        3'b100 : immediate = {raw_src[24:5], 12'b000000000000};
        default: immediate = 12'b0;
    endcase
end

endmodule