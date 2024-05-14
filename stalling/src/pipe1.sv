/* verilator lint_off EOFNEWLINE */
module pipe1(
	input logic [31:0] ins,
	input logic [31:0] pc_four,
	output logic [31:0] ins_out,
	output logic [31:0] pc_4_out,
	input logic [31:0] pc,
	output logic [31:0] pc_out,
	input clk,
	input br_sel,
	output br_sel_o,
	input rst
);
always @(posedge clk)
begin
	if(rst)
	begin
		ins_out <= 32'h00000000;
		pc_4_out <= 32'h00000000;
		pc_out <= 32'h00000000;
		br_sel_o <= 1'b0;
	end
	else
	begin
		ins_out <= ins;
		pc_4_out <= pc_four;
		pc_out <= pc;
		br_sel_o <= br_sel;
		
	end
end
endmodule

		
