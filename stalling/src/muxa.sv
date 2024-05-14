/* verilator lint_off EOFNEWLINE */
module muxa(
	input logic [31:0] data1,
	input logic [31:0] pc,
	input logic op_a_sel,
	output logic [31:0] op_a
);
assign op_a=(op_a_sel == 1)?pc:data1;
endmodule
