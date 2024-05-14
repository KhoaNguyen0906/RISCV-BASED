/* verilator lint_off EOFNEWLINE */
module regfile(
	input clk,rst,
	input logic [31:0] dataW,
	input logic [4:0]  rs1,
	input logic [4:0]  rd,
	input logic [4:0]  rs2,
	input logic RegWEn,
	output logic [31:0] data1,
	output logic [31:0] data2

);
logic [31:0] register[31:0];
assign data1 = register[rs1];
assign data2 = register[rs2];
always @(posedge clk)
begin
	if (rst)
	begin
		for(int i = 0; i <= 32; i = i + 1)
		 	begin 
				register[i] <= 32'b00000000;
			end
	end
	else
		begin
		if(RegWEn)
		begin
			register[rd] <= dataW;
		
		end
		end
end
endmodule

