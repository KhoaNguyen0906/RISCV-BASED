/* verilator lint_off EOFNEWLINE */
/* verilator lint_off COMBDLY */
module mux_data(
	input logic [31:0] pc_four,
	input logic [31:0] data_out,
	input logic [31:0] alu_data,
	output logic [31:0] wb_data,
	input logic [1:0] wb_sel
);
always @(*)
	begin
		case(wb_sel)
		
			2'b00: begin
			wb_data <= alu_data;
			end

			2'b01: begin
			wb_data <= data_out;
			end

			2'b10: begin
			wb_data <= pc_four;
			end

			2'b11: begin
			wb_data <= pc_four;
			end
		endcase
	end

endmodule
