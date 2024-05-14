/* verilator lint_off CASEINCOMPLETE */
module mux1_forward(
	input logic [31:0] data1,
	input logic [31:0] alu_data,
	input logic [31:0] dataW,
	output logic [31:0] opa,
	input logic [1:0] forward_a_sel
);
always @(*) 
begin
	case(forward_a_sel)
		2'b00: opa = data1;
		2'b01: opa = dataW;
		2'b10: opa = alu_data;
	endcase
end
endmodule
		
