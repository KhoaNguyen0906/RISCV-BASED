/* verilator lint_off EOFNEWLINE */
/* verilator lint_off UNUSED */
/* verilator lint_off CASEINCOMPLETE */
module function3(
	input logic [31:0] wb_data,
	input logic [2:0] imm_select,
	output logic [31:0] rd_data,
	input logic [4:0] opcode
);
always @(*)
begin
	if (opcode == 5'b00000)
	begin
	case(imm_select)
// LB 
3'b000: rd_data = {{24{wb_data[31]}},wb_data[7:0]} ;
// LH 
3'b001: rd_data = {{16{wb_data[31]}},wb_data[15:0]} ;
// LBU
3'b100: rd_data = {{{24{1'b0}},wb_data[7:0]}} ;
// LHU
3'b101: rd_data = {{{16{1'b0}},wb_data[15:0]}}  ;
3'b010: rd_data = wb_data;
	endcase
	end
	else 
		begin
		rd_data = wb_data;
		end
	
end
endmodule
