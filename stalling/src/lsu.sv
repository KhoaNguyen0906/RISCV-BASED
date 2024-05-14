/* verilator lint_off EOFNEWLINE */
/* verilator lint_off BLKSEQ */
/* verilator lint_off LATCH */
module lsu(
	input rst,
	input logic [10:0] addr,
	input [31:0] st_data,
	output logic [31:0] data_out,
	input mem_wren,
	input logic [31:0] sw,
	output logic [31:0] io_LCD,
	output logic [31:0] io_ledg,
	output logic [31:0] io_ledr,
	output logic [31:0] io_hex0,
	output logic [31:0] io_hex1,
	output logic [31:0] io_hex2,
	output logic [31:0] io_hex3,
	output logic [31:0] io_hex4,
	output logic [31:0] io_hex5,
	output logic [31:0] io_hex6,
	output logic [31:0] io_hex7
);
logic [31:0] dmem[1535:0];
int i;
always @(*)
	begin
		if (rst)
			begin
			for ( i =0; i < 1536; i=i+1)
				begin 
					dmem[i] = 32'b00000000;
				end
			end
			
		if (mem_wren)
			begin
			dmem[addr] = st_data;
			end

		if (!mem_wren)
			begin
			data_out = dmem[addr];
			end 
	end
assign io_LCD = dmem[1184];
assign io_ledg = dmem[1168];
assign io_ledr = dmem[1152];
assign io_hex0 = dmem[1024];
assign io_hex1 = dmem[1040];
assign io_hex2 = dmem[1056];
assign io_hex3 = dmem[1072];
assign io_hex4 = dmem[1088];
assign io_hex5 = dmem[1104];
assign io_hex6 = dmem[1120];
assign io_hex7 = dmem[1136];
assign dmem[1280] = sw;

endmodule
