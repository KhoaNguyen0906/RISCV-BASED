/* verilator lint_off EOFNEWLINE */
module muxb(
	input logic [31:0] data2,
	input logic [31:0] imm,
	input logic op_b_sel,
	output logic [31:0] op_b
);
assign op_b=(op_b_sel == 1)?imm:data2;
endmodule
