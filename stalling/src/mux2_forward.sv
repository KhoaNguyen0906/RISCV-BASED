/* verilator lint_off CASEINCOMPLETE */
module mux2_forward(
	input logic [31:0] data2,
	input logic [31:0] alu_data,
	input logic [31:0] dataW,
	output logic [31:0] opb,
	input logic [1:0] forward_b_sel
);
always @(*) 
begin
	case(forward_b_sel)
		2'b00: opb = data2;
		2'b01: opb = dataW;
		2'b10: opb = alu_data;
	endcase
end
endmodule
		
