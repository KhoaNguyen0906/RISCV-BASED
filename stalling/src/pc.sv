/* verilator lint_off EOFNEWLINE */
/* verilator lint_off VARHIDDEN */
module pc(
	input logic [12:0] nxt_pc,
	output logic [12:0] pc_o,
	input logic clk,
	input stalling_signal
	
);

logic state ;
initial 
	begin
		state =1'b0; 
	end
always @(posedge clk)
begin 
	case(state)
	1'b0:	begin
		pc_o<= nxt_pc;
		if(stalling_signal)
			begin
				state <= 1'b1;		
		end
		else
			begin
				state <=1'b0;;
			end
		end
	1'b1: begin
		pc_o<= pc_o;
		state<=1'b0;
		end
	endcase
end
endmodule

		
