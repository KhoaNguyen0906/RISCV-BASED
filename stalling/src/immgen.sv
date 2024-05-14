/* verilator lint_off EOFNEWLINE */
/* verilator lint_off UNUSED */
module immgen(
	input logic [31:0] inst,
	output logic [31:0] imm,
	input clk
);
logic [6:0] comp_bit;
assign comp_bit = inst[6:0];
logic [2:0] function3;
assign function3 = inst[14:12];
always @(posedge clk)
	begin
	case (comp_bit)
	
		7'b0010011 : imm <= { {21{inst[31]}},inst[30:25],inst[24:21],inst[20] }; // I TYPE
		7'b0100011 : imm <= { {21{inst[31]}},inst[30:25],inst[11:8],inst[7] };   // S TYPE
		7'b1100011 : imm <= { {20{inst[31]}},inst[7],inst[30:25],inst[11:8],1'b0}; // B TYPE
		7'b0110111 : imm <= { inst[31],inst[30:20],inst[19:12],{12{1'b0}}}; // U TYPE
		7'b1101111 : imm <= { {12{inst[31]}},inst[19:12],inst[20],inst[30:25],inst[24:21],1'b0};// J TYPE
		7'b0000011 : imm <= { {21{inst[31]}},inst[30:25],inst[24:21],inst[20]}; // LOAD TYPE
		7'b0010111 : imm <= { inst[31],inst[30:20],inst[19:12],{12{1'b0}}}; // AUIPC
		7'b1100111 : imm <= { {21{inst[31]}},inst[30:25],inst[24:21],inst[20]}; // JALR
		default    : imm <= 32'd0;
	endcase
end
endmodule
