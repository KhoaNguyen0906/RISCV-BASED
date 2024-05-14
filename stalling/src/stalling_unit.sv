module stalling_unit(
	input logic [6:0] opcode,
	output stalling_signal
);

initial begin
	stalling_signal = 1'b0;
	end
	assign stalling_signal = (opcode == 7'b0000011)?1:0;

endmodule
