/* verilator lint_off EOFNEWLINE */
module hazard_unit(
    input rst, RegWriteM, RegWriteW,
    input logic [4:0] RD_M, RD_W, rs1_forward, rs2_forward,
    output logic [1:0] forward_a_sel, forward_b_sel
 );
 always @(*) 
 	begin
    forward_a_sel = (rst == 1'b1) ? 2'b00 : 
                       ((RegWriteM == 1'b1) & (RD_M != 5'h00) & (RD_M == rs1_forward)) ? 2'b10 :
                       ((RegWriteW == 1'b1) & (RD_W != 5'h00) & (RD_W == rs1_forward)) ? 2'b01 : 2'b00;
                       
    forward_b_sel = (rst == 1'b1) ? 2'b00 : 
                       ((RegWriteM == 1'b1) & (RD_M != 5'h00) & (RD_M == rs2_forward)) ? 2'b10 :
                       ((RegWriteW == 1'b1) & (RD_W != 5'h00) & (RD_W == rs2_forward)) ? 2'b01 : 2'b00;
         end
endmodule
