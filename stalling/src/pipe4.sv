module pipe4(
	input logic [4:0] rd,
	output logic [4:0] rd_o,
	input rd_wren,
	output rd_wren_o,
	input logic [31:0] data_mux,
	output logic [31:0] data_mux_o,
	input clk,
	input logic [2:0] imm_select4,
	output logic [2:0] imm_select_o,
	input logic [4:0] opcode3,
	output logic [4:0] opcode4,
	input rst
);
always @(posedge clk)
begin
	if(rst)
	begin
		rd_o <= 5'b00000;
		rd_wren_o <= 0;
		data_mux_o <= 32'h00000000;
		imm_select_o <= 3'b000;
		opcode4 <= 5'b00000;
	end
	else
	begin
		rd_o <= rd;
		rd_wren_o <= rd_wren;
		data_mux_o <= data_mux;
		imm_select_o <= imm_select4;
		opcode4 <= opcode3;
	end
end
endmodule
		
