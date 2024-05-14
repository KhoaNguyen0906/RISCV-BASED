/* verilator lint_off EOFNEWLINE */
/* verilator lint_off UNUSED */
/* verilator lint_off CASEINCOMPLETE */
module StoreFunc3(
	input logic [31:0] data2,
	input logic [2:0] imm_store,
	output logic [31:0] rs2_data,
	input logic [4:0] opcode,
	input clk
);
always @(posedge clk)
begin
	if (opcode == 5'b01000)
	begin
	case(imm_store)
	// SB
		3'b000: rs2_data <= {{24{data2[31]}},data2[7:0]}; 
	// SH
		3'b001: rs2_data <= {{16{data2[31]}},data2[15:0]};
	// Store
		3'b010: rs2_data <= data2;
	endcase
end
	else 
	begin 
		rs2_data <= data2;
		end
end
endmodule
