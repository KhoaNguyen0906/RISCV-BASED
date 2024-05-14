/* verilator lint_off EOFNEWLINE */
module pipe2(
	input logic [4:0] rs1,
	input logic [4:0] rs2,
	output logic [4:0] rs1_hazard,
	output logic [4:0] rs2_hazard,
	input logic [4:0] opcode,
	output logic [4:0] opcode2,
	input logic [31:0] data1,
	input logic [31:0] pc1,
	output logic [31:0] pc2,
	input logic [31:0] data2,
	output logic [31:0] data1_o,
	output logic [31:0] data2_o,
	input logic [31:0] imm,
	output logic [31:0] imm_o,
	input br_unsigned,
	input op_a_sel,
	input op_b_sel,
	input logic [3:0] alu_op,
	input mem_wren,
	input [1:0] wb_sel,
	input rd_wren,
	output rd_wren_o,
	output br_u_out,
	output op_a_sel_o,
	output op_b_sel_o,
	output logic [3:0] alu_op_o,
	output mem_wren_o,
	output logic [1:0] wb_sel_o,
	input logic [4:0] rd,
	output logic [4:0] rd_o,
	input clk,
	input logic [31:0] pc_out,
	output logic [31:0] pc_out_o,
	input logic [2:0] imm_select,
	input logic [2:0] imm_sto,
	output logic [2:0] imm_select_3,
	output logic [2:0] imm_sto_o,
	input rst
);
always @(posedge clk)
begin
	if(rst)
	begin
		data1_o <= 32'h00000000;
		data2_o <= 32'h00000000;
		imm_o <= 32'h00000000;
		br_u_out <= 0;
		op_a_sel_o <= 0;
		op_b_sel_o <= 0;
		alu_op_o <= 4'b0000;
		mem_wren_o <= 0;
		wb_sel_o <= 2'b00;
		pc2 <= 32'h00000000;
		rd_o <= 5'b00000;
		rd_wren_o <= 0;
		pc_out_o <= 32'h00000000;
		imm_select_3 <= 3'b000;
		imm_sto_o <= 3'b000;
		opcode2 <= 5'b00000;
		rs1_hazard <= 5'b00000;
		rs2_hazard <= 5'b00000;

	end
	else
	begin
		data1_o <= data1;
		data2_o <= data2;
		imm_o <= imm;
		br_u_out <= br_unsigned;
		op_a_sel_o <= op_a_sel;
		op_b_sel_o <= op_b_sel;
		alu_op_o <= alu_op;
		mem_wren_o <= mem_wren;
		wb_sel_o <= wb_sel;
		pc2 <= pc1;
		rd_o <= rd;
		rd_wren_o <= rd_wren;
		pc_out_o <= pc_out;
		imm_select_3 <= imm_select;
		imm_sto_o <= imm_sto;
		opcode2 <= opcode;
		rs1_hazard <= rs1;
		rs2_hazard <= rs2;
	end
end
endmodule

		
