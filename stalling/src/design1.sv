/* verilator lint_off EOFNEWLINE */
/* verilator lint_off NULLPORT */
/* verilator lint_off WIDTH */
/* verilator lint_off UNUSED */
/* verilator lint_off UNDRIVEN */
module design1(
	input clk,
	input rst,
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
wire [2:0] imm_sto_out;
wire br_select_out1;
wire alu_op_o;
wire brunsigned_o;
wire [31:0] aludata_o;
wire [4:0] rd2_3;
wire [4:0] rd3_4;
wire [4:0] rd4_reg;
wire [31:0] pc_muxa;
wire [31:0] imm_muxout;
wire [31:0] data1_out;
wire [31:0] data2_out;
wire [31:0] pc_o1;
wire [31:0] pc_o;
wire [31:0] ins_out;
wire [31:0] pc_o2;
wire [31:0] pc_o3;
wire [31:0] pc4;
wire [31:0] nxtpc;
wire [12:0] pc_ins;
wire [31:0] ins;
wire [31:0] data_1;
wire [31:0] data_2;
wire [31:0] immgen_mux;
wire [31:0] opa;
wire [31:0] opb;
wire [31:0] aludata;
wire brless;
wire brequal;
wire rd_wren;
wire brunsigned;
wire [3:0] alu_opcode;
wire br_select;
wire op_a_sel;
wire op_a_sel_o;
wire op_b_sel_o;
wire op_b_sel;
wire [2:0] imm_sel;
wire [2:0] imm_sto;
wire [31:0] dataW;
wire [1:0] wb_sel;
wire [31:0] rs2_data;
wire [31:0] ld_data;
wire mem_wren;
wire [31:0] wb_data;
wire [2:0] imm_sel_3_4;
wire [2:0] imm_sel_4_o;
wire [2:0] imm_sel_o_data;
wire rd_wreno2;
wire rd_wreno3;
wire rd_wren_out;
wire [2:0] imm_sto_out2;
wire mem_wren2;
wire mem_wren3;
wire [1:0] wb_sel2;
wire [1:0] wb_sel3;
wire [31:0] wb_data_in;
wire [4:0] op_o2;
wire [4:0] op_sto;
wire [4:0] op_load;
wire [31:0] data2_3;
wire [31:0] opa_in;
wire [31:0] opb_in;
wire [4:0] Rs1_F;
wire [4:0] Rs2_F;
wire [1:0] forward_a_select;
wire [1:0] forward_b_select;
wire stalling_signal;
logic [31:0] aludata_2;
logic [31:0] aludata_3;
assign aludata_2 = aludata;
assign aludata_3 = aludata;
mux1 mux1(
.alu_data(aludata_2),
.pc_four(pc4),
.nxt_pc(nxtpc),
.br_sel(br_select_out1)
);


pc pc(
.nxt_pc(nxtpc[12:0]),
.pc_o(pc_ins),
.clk(clk),
.stalling_signal(stalling_signal)
);

stalling_unit stalling_unit(
.opcode(ins[6:0]),
.stalling_signal(stalling_signal)
);

imem imem(
.pc(pc_ins),
.inst(ins)
);


adder_four adder_four(
.pc(pc_ins),
.pc_four(pc4)
);


regfile regfile(
.dataW(dataW),
.rs1(ins_out[19:15]),
.rs2(ins_out[24:20]),
.rd(rd4_reg),
.RegWEn(rd_wren_out),
.data1(data_1),
.data2(data_2),
.clk(clk),
.rst(rst)
);


muxa muxa(
.data1(opa_in),
.pc(pc_muxa),
.op_a_sel(op_a_sel_o),
.op_a(opa)
);


muxb muxb(
.data2(opb_in),
.imm(imm_muxout),
.op_b_sel(op_b_sel_o),
.op_b(opb)
);


immgen immgen(
.inst(ins),
.imm(immgen_mux),
.clk(clk)
);


brcomp brcomp(
.data1(data1_out),
.data2(data2_out),
.br_unsigned(brunsigned_o),
.br_less(brless),
.br_equal(brequal)
);

ALU ALU(
.op_a(opa),
.op_b(opb),
.alu_data(aludata_3),
.alu_op(alu_op_o)
);


ConTrolUnit ConTrolUnit(
.inst(ins_out),
.br_less(brless),
.br_equal(brequal),
.br_sel(br_select),
.RegWen(rd_wren),
.br_unsigned(brunsigned),
.op_a_sel(op_a_sel),
.op_b_sel(op_b_sel),
.alu_op(alu_opcode),
.mem_wren(mem_wren),
.wb_sel(wb_sel),
.imm_select(imm_sel),
.imm_store(imm_sto)
);


function3 function3(
.wb_data(wb_data),
.imm_select(imm_sel_o_data),
.rd_data(dataW),
.opcode(op_load)
);


StoreFunc3 StoreFunc3(
.data2(opb_in),
.imm_store(imm_sto_out2),
.rs2_data(rs2_data),
.opcode(op_o2),
.clk(clk)
);

mux1_forward mux1_forward(
.data1(data1_out),
.alu_data(aludata_2),
.dataW(dataW),
.opa(opa_in),
.forward_a_sel(forward_a_select)
);

mux2_forward mux2_forward(
.data2(data2_out),
.alu_data(aludata_o),
.dataW(dataW),
.opb(opb_in),
.forward_b_sel(forward_b_select)
);

lsu lsu(
.rst(rst),
.addr(aludata_o[10:0]),
.st_data(rs2_data),
.data_out(ld_data),
.mem_wren(mem_wren3),
.sw(sw),
.io_LCD(io_LCD),
.io_ledg(io_ledg),
.io_ledr(io_ledr),
.io_hex0(io_hex0),
.io_hex1(io_hex1),
.io_hex2(io_hex2),
.io_hex3(io_hex3),
.io_hex4(io_hex4),
.io_hex5(io_hex5),
.io_hex6(io_hex6),
.io_hex7(io_hex7)
);

mux_data mux_data(
.pc_four(pc_o3),
.data_out(ld_data),
.alu_data(aludata_o),
.wb_data(wb_data_in),
.wb_sel(wb_sel3)
);

pipe1 pipe1(
.pc_four(pc4),
.ins(ins),
.pc_4_out(pc_o1),
.ins_out(ins_out),
.clk(clk),
.rst(rst),
.pc(pc_ins),
.pc_out(pc_o),
.br_sel(br_select),
.br_sel_o(br_select_out1)
);

pipe2 pipe2(
.data1(data_1),
.pc1(pc_o1),
.pc2(pc_o2),
.data2(data_2),
.data1_o(data1_out),
.data2_o(data2_out),
.imm(immgen_mux),
.imm_o(imm_muxout),
.br_unsigned(brunsigned),
.op_a_sel(op_a_sel),
.op_b_sel(op_b_sel),
.alu_op(alu_opcode),
.mem_wren(mem_wren),
.wb_sel(wb_sel),
.rd_wren(rd_wren),
.rd_wren_o(rd_wreno2),
.br_u_out(brunsigned_o),
.op_a_sel_o(op_a_sel_o),
.op_b_sel_o(op_b_sel_o),
.alu_op_o(alu_op_o),
.mem_wren_o(mem_wren2),
.wb_sel_o(wb_sel2),
.rd(ins_out[11:7]),
.rd_o(rd2_3),
.clk(clk),
.rst(rst),
.pc_out(pc_o),
.pc_out_o(pc_muxa),
.imm_select(imm_sel),
.imm_sto(imm_sto),
.imm_select_3(imm_sel_3_4),
.imm_sto_o(imm_sto_out2),
.opcode(ins_out[6:2]),
.opcode2(op_o2),
.rs1(ins_out[19:15]),
.rs2(ins_out[24:20]),
.rs1_hazard(Rs1_F),
.rs2_hazard(Rs2_F)
);

pipe3 pipe3(
.pc2(pc_o2),
.pc3(pc_o3),
.data2(data_2),
.data2_o(data2_3),
.mem_wren(mem_wren2),
.wb_sel(wb_sel2),
.mem_wren_o(mem_wren3),
.wb_sel_o(wb_sel3),
.rd(rd2_3),
.rd_o(rd3_4),
.rd_wren(rd_wreno2),
.rd_wren_o(rd_wreno3),
.alu_data(aludata_3),
.alu_data_o(aludata_o),
.clk(clk),
.imm_select3(imm_sel_3_4),
.imm_select_4(imm_sel_4_o),
.rst(rst),
.imm_sto2(imm_sto_out2),
.imm_sto_out(imm_sto_out),
.opcode2(op_o2),
.opcode3(op_sto)
);

pipe4 pipe4(
.rd(rd3_4),
.rd_o(rd4_reg),
.rd_wren(rd_wreno3),
.rd_wren_o(rd_wren_out),
.data_mux(wb_data_in),
.data_mux_o(wb_data),
.clk(clk),
.imm_select4(imm_sel_4_o),
.imm_select_o(imm_sel_o_data),
.rst(rst),
.opcode3(op_sto),
.opcode4(op_load)
);

hazard_unit hazard_unit(
.rst(rst), 
.RegWriteM(rd_wreno3), 
.RegWriteW(rd_wren_out),
.RD_M(rd3_4), 
.RD_W(rd4_reg), 
.rs1_forward(Rs1_F), 
.rs2_forward(Rs2_F),
.forward_a_sel(forward_a_select), 
.forward_b_sel(forward_b_select)
);

endmodule
