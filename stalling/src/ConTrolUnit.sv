/* verilator lint_off EOFNEWLINE */
/* verilator lint_off UNUSED */
/* verilator lint_off CASEINCOMPLETE */
module ConTrolUnit(
	input logic [31:0] inst,
	input br_less,
	input br_equal,
	output br_sel,
	output RegWen,
	output br_unsigned,
	output op_a_sel,
	output op_b_sel,
	output logic [3:0] alu_op,
	output mem_wren,
	output logic [1:0] wb_sel,
	output logic [2:0] imm_select,
	output logic [2:0] imm_store
);
logic [6:0] comp_bit;
logic [2:0] func3;
assign comp_bit = inst[6:0];
assign func3 = inst[14:12];
always @(*)
begin
	case(comp_bit)
	
	7'b0110011 : begin // R TYPE
		     RegWen = 1'b1;
		     op_a_sel = 1'b0;
		     op_b_sel = 1'b0;
		     br_sel   = 1'b0;
		     mem_wren = 1'b0;
		     wb_sel   = 2'b00;
		     case(func3)
			
				3'b000 : alu_op = (inst[30] == 0)?4'b0000:4'b0001; // ADD/SUB 
				3'b010 : alu_op = 4'b0010; // SLT
				3'b011 : begin
					alu_op = 4'b0011;
					br_unsigned = 1;
					end // SLTU
				3'b100 : alu_op = 4'b0100; // XOR
				3'b110 : alu_op = 4'b0101; // OR
				3'b111 : alu_op = 4'b0110; // AND
				3'b001 : alu_op = 4'b0111; // SLL
				3'b101 : alu_op = (inst[30] == 0)?4'b1000:4'b1001; // SRL_SRA
			endcase
	
			end


	7'b0010011 : begin // I TYPE
			RegWen = 1'b1;
		     op_a_sel = 1'b0;
		     op_b_sel = 1'b1;
		     br_sel   = 1'b0;
		     mem_wren = 1'b0;
		     wb_sel   = 2'b00;
		     case(func3)
			
				3'b000 : alu_op = 4'b0000; // ADD
				3'b010 : alu_op = 4'b0010; // SLT
				3'b011 : begin
					alu_op = 4'b0011;
					br_unsigned = 1;
					end // SLTU
				3'b100 : alu_op = 4'b0100; // XOR
				3'b110 : alu_op = 4'b0101; // OR
				3'b111 : alu_op = 4'b0110; // AND
				3'b001 : alu_op = 4'b0111; // SLL
				3'b101 : alu_op = (inst[30] == 0)?4'b1000:4'b1001; // SRL_SRA
			endcase
	end


	7'b0100011 : begin // S TYPE
			case(func3)
					
			3'b010: begin
			imm_store = 3'b010;
			br_sel = 1'b0;
			op_a_sel = 1'b0;
			op_b_sel = 1'b1;
			mem_wren = 1'b1;
			RegWen = 1'b0;
			alu_op = 4'b0000;
			end

			3'b000: begin
			imm_store = 3'b000;
			br_sel = 1'b0;
			op_a_sel = 1'b0;
			op_b_sel = 1'b1;
			mem_wren = 1'b1;
			RegWen = 1'b0;
			alu_op = 4'b0000;
			end
			
			3'b001: begin
			imm_store = 3'b001;
			br_sel = 1'b0;
			op_a_sel = 1'b0;
			op_b_sel = 1'b1;
			mem_wren = 1'b1;
			RegWen = 1'b0;
			alu_op = 4'b0000;
			end
			endcase
	end



	7'b1100011 : begin // B TYPE
			alu_op = 4'b0000;
			op_a_sel = 1'b1;
			op_b_sel = 1'b1;
			RegWen = 1'b0;
			case(func3)
				
					3'b000 : br_sel = (br_equal == 1)?1:0; // BE
					3'b001 : br_sel = (br_equal == 0)?1:0; // BNE
					3'b100 : br_sel = (br_less == 1)?1:0; // BLT
					3'b101 : br_sel = (br_less == 0)?1:0; // BGE
					3'b110 : begin
						br_unsigned = 1;
						br_sel = (br_less == 1)?1:0; // BLTU
						end
					3'b111 : begin
						br_unsigned = 1;
						br_sel = (br_less == 0)?1:0; // BGEU
						end
				endcase
	end


	7'b0110111 : begin // U TYPE
			br_sel = 1'b0;
			op_b_sel = 1'b1;
			RegWen = 1'b1;
			mem_wren = 1'b0;
			wb_sel = 2'b00;
			alu_op = 4'b1010;
			end


	7'b1101111 : begin // J TYPE
			op_a_sel = 1'b1;
			op_b_sel = 1'b1;
			br_sel = 1'b1;
			RegWen = 1'b1;
			wb_sel = 2'b10;
			alu_op = 4'b0000;
	end


	7'b0000011 : begin // LOAD TYPE - LW
			case(func3)
			

			3'b010 : begin
			imm_select = 3'b010;
			op_a_sel = 1'b0;
			op_b_sel = 1'b1;
			wb_sel = 2'b01;
			RegWen = 1'b1;
			alu_op = 4'b0000;
			mem_wren = 1'b0;
			br_sel = 1'b0;
			end

			3'b000 : begin
			imm_select = 3'b000;
			op_a_sel = 1'b0;
			op_b_sel = 1'b1;
			wb_sel = 2'b01;
			RegWen = 1'b1;
			alu_op = 4'b0000;
			mem_wren = 1'b0;
			br_sel = 1'b0;
			end
			
			3'b001 : begin
			imm_select = 3'b001;
			op_a_sel = 1'b0;
			op_b_sel = 1'b1;
			wb_sel = 2'b01;
			RegWen = 1'b1;
			alu_op = 4'b0000;
			mem_wren = 1'b0;
			br_sel = 1'b0;
			end

 			3'b100 : begin
			imm_select = 3'b100;
			op_a_sel = 1'b0;
			op_b_sel = 1'b1;
			wb_sel = 2'b01;
			RegWen = 1'b1;
			alu_op = 4'b0000;
			mem_wren = 1'b0;
			br_sel = 1'b0;
			end

			3'b101 : begin
			imm_select = 3'b101;
			op_a_sel = 1'b0;
			op_b_sel = 1'b1;
			wb_sel = 2'b01;
			RegWen = 1'b1;
			alu_op = 4'b0000;
			mem_wren = 1'b0;
			br_sel = 1'b0;
			end
			endcase
	end


	7'b1100111 : begin // Jump and Link Register
			op_a_sel = 1'b0;
			op_b_sel = 1'b1;
			br_sel = 1'b1;
			RegWen = 1'b1;
			wb_sel = 2'b11;
			alu_op = 4'b0000;
			mem_wren = 1'b0;
	end

	
	7'b0010111 : begin // AUIPC
			wb_sel = 2'b00;
			mem_wren = 1'b0;
			op_a_sel = 1'b1;
			op_b_sel = 1'b1;
			alu_op = 4'b0000;
			RegWen = 1'b1;
			br_sel = 1'b0;
	end

endcase
end
endmodule
