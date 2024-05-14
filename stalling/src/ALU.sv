/* verilator lint_off EOFNEWLINE */
/* verilator lint_off WIDTH */
/* verilator lint_off CASEINCOMPLETE */
module ALU(
	input logic [31:0] op_a,
	input logic [31:0] op_b,
	input logic [3:0] alu_op,
	output logic [31:0] alu_data
);

always @(*)
begin
	case(alu_op) 
	4'b0000 : alu_data = op_a + op_b; // ADD FUNCTION
	4'b0001 : alu_data = op_a + ~op_b + 1; // SUB FUNCTION
	4'b0010 : alu_data = ((op_a + ~op_b + 1) >> 31)?32'b1:32'b0; // SLT
	4'b0011 : alu_data = (((op_a + ~op_b + 1) >> 31) && !((op_a >> 31) && (op_b >> 31)))?32'b1:32'b0; // SLTU
	4'b0100 : alu_data = op_a ^ op_b; // XOR FUNCTION
	4'b0101 : alu_data = op_a | op_b; // OR FUNCTION 
	4'b0110 : alu_data = op_a & op_b; // AND FUNCTION
	4'b0111 : alu_data = op_a << op_b[4:0]; // SHIFT LEFT FUNCTION
	4'b1000 : alu_data = op_a >> op_b[4:0]; // SHIFT RIGHT FUNCTION
	4'b1001 : alu_data = $signed(op_a) >>> op_b[4:0]; // SHIFT RIGHT ALGORITHM
	4'b1010 : alu_data = op_b; // LUI
	//default : alu_data = 32'b0;
	endcase

end
endmodule
