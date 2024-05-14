module pipe3(
	input logic [31:0] pc2,
	output logic [31:0] pc3,
	input logic [31:0] data2,
	output logic [31:0] data2_o,
	input mem_wren,
	input [1:0] wb_sel,
	output mem_wren_o,
	output logic [1:0] wb_sel_o,
	input logic [4:0] rd,
	output logic [4:0] rd_o,
	input rd_wren,
	output rd_wren_o,
	input logic [31:0] alu_data,
	output logic [31:0] alu_data_o,
	input clk,
	input logic [2:0] imm_select3,
	output logic [2:0] imm_select_4,
	input logic [2:0] imm_sto2,
	output logic [2:0] imm_sto_out,
	input logic [4:0] opcode2,
	output logic [4:0] opcode3,
	input rst
);
always @(posedge clk)
begin
	if(rst)
	begin
		data2_o <= 32'h00000000;
		mem_wren_o <= 0;
		wb_sel_o <= 2'b00;
		pc3 <= 32'h00000000;
		rd_o <= 5'b00000;
		rd_wren_o <= 0;
		alu_data_o <= 32'h00000000;
		imm_select_4 <= 3'b000;
		imm_sto_out <= 3'b000;
		opcode3 <= 5'b00000;
	end
	else
	begin
		data2_o <= data2;
		mem_wren_o <= mem_wren;
		wb_sel_o <= wb_sel;
		pc3 <= pc2;
		rd_o <= rd;
		rd_wren_o <= rd_wren;
		alu_data_o <= alu_data;
		imm_select_4 <= imm_select3;
		imm_sto_out <= imm_sto2;
		opcode3 <= opcode2;
	end
end
endmodule
		
