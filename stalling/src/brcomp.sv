/* verilator lint_off EOFNEWLINE */
/* verilator lint_off WIDTH */
module brcomp(
	input logic [31:0] data1,
	input logic [31:0] data2,
	input br_unsigned,
	output br_less,
	output br_equal
);
always @*
begin
	br_equal = ((data1  + ~data2 + 1)==0)?1:0;
	if (br_unsigned)
	begin
	br_less = ((data1 + ~data2 + 1) >> 31)?1:0;
	end
	else
	begin
	br_less = ((data1 + ~data2 + 1) >> 31) && !((data1 >> 31) ^ (data2 >> 31))?1:0;
	end
end
endmodule
