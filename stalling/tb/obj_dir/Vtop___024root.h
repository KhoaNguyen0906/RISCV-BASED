// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        CData/*2:0*/ top__DOT__design1__DOT__imm_sto_out;
        CData/*0:0*/ top__DOT__design1__DOT__br_select_out1;
        CData/*0:0*/ top__DOT__design1__DOT__brunsigned_o;
        CData/*4:0*/ top__DOT__design1__DOT__rd2_3;
        CData/*4:0*/ top__DOT__design1__DOT__rd3_4;
        CData/*4:0*/ top__DOT__design1__DOT__rd4_reg;
        CData/*0:0*/ top__DOT__design1__DOT__brless;
        CData/*0:0*/ top__DOT__design1__DOT__brequal;
        CData/*0:0*/ top__DOT__design1__DOT__rd_wren;
        CData/*0:0*/ top__DOT__design1__DOT__brunsigned;
        CData/*3:0*/ top__DOT__design1__DOT__alu_opcode;
        CData/*0:0*/ top__DOT__design1__DOT__br_select;
        CData/*0:0*/ top__DOT__design1__DOT__op_a_sel;
        CData/*0:0*/ top__DOT__design1__DOT__op_a_sel_o;
        CData/*0:0*/ top__DOT__design1__DOT__op_b_sel_o;
        CData/*0:0*/ top__DOT__design1__DOT__op_b_sel;
        CData/*2:0*/ top__DOT__design1__DOT__imm_sel;
        CData/*2:0*/ top__DOT__design1__DOT__imm_sto;
        CData/*1:0*/ top__DOT__design1__DOT__wb_sel;
        CData/*0:0*/ top__DOT__design1__DOT__mem_wren;
        CData/*2:0*/ top__DOT__design1__DOT__imm_sel_3_4;
        CData/*2:0*/ top__DOT__design1__DOT__imm_sel_4_o;
        CData/*2:0*/ top__DOT__design1__DOT__imm_sel_o_data;
        CData/*0:0*/ top__DOT__design1__DOT__rd_wreno2;
        CData/*0:0*/ top__DOT__design1__DOT__rd_wreno3;
        CData/*0:0*/ top__DOT__design1__DOT__rd_wren_out;
        CData/*2:0*/ top__DOT__design1__DOT__imm_sto_out2;
        CData/*0:0*/ top__DOT__design1__DOT__mem_wren2;
        CData/*0:0*/ top__DOT__design1__DOT__mem_wren3;
        CData/*1:0*/ top__DOT__design1__DOT__wb_sel2;
        CData/*1:0*/ top__DOT__design1__DOT__wb_sel3;
        CData/*4:0*/ top__DOT__design1__DOT__op_o2;
        CData/*4:0*/ top__DOT__design1__DOT__op_sto;
        CData/*4:0*/ top__DOT__design1__DOT__op_load;
        CData/*4:0*/ top__DOT__design1__DOT__Rs1_F;
        CData/*4:0*/ top__DOT__design1__DOT__Rs2_F;
        CData/*1:0*/ top__DOT__design1__DOT__forward_a_select;
        CData/*1:0*/ top__DOT__design1__DOT__forward_b_select;
        CData/*0:0*/ top__DOT__design1__DOT__stalling_signal;
        CData/*3:0*/ top__DOT__design1__DOT____Vcellout__pipe2__alu_op_o;
        CData/*0:0*/ top__DOT__design1__DOT__pc__DOT__state;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        SData/*12:0*/ top__DOT__design1__DOT__pc_ins;
        VL_IN(io_sw_i,31,0);
        VL_OUT(io_lcd_o,31,0);
        VL_OUT(io_ledg_o,31,0);
        VL_OUT(io_ledr_o,31,0);
        VL_OUT(io_hex0_o,31,0);
        VL_OUT(io_hex1_o,31,0);
        VL_OUT(io_hex2_o,31,0);
        VL_OUT(io_hex3_o,31,0);
        VL_OUT(io_hex4_o,31,0);
        VL_OUT(io_hex5_o,31,0);
        VL_OUT(io_hex6_o,31,0);
        VL_OUT(io_hex7_o,31,0);
        IData/*31:0*/ top__DOT__design1__DOT__aludata_o;
        IData/*31:0*/ top__DOT__design1__DOT__pc_muxa;
        IData/*31:0*/ top__DOT__design1__DOT__imm_muxout;
        IData/*31:0*/ top__DOT__design1__DOT__data1_out;
        IData/*31:0*/ top__DOT__design1__DOT__data2_out;
        IData/*31:0*/ top__DOT__design1__DOT__pc_o1;
        IData/*31:0*/ top__DOT__design1__DOT__pc_o;
    };
    struct {
        IData/*31:0*/ top__DOT__design1__DOT__ins_out;
        IData/*31:0*/ top__DOT__design1__DOT__pc_o2;
        IData/*31:0*/ top__DOT__design1__DOT__pc_o3;
        IData/*31:0*/ top__DOT__design1__DOT__nxtpc;
        IData/*31:0*/ top__DOT__design1__DOT__ins;
        IData/*31:0*/ top__DOT__design1__DOT__data_2;
        IData/*31:0*/ top__DOT__design1__DOT__immgen_mux;
        IData/*31:0*/ top__DOT__design1__DOT__opa;
        IData/*31:0*/ top__DOT__design1__DOT__opb;
        IData/*31:0*/ top__DOT__design1__DOT__aludata;
        IData/*31:0*/ top__DOT__design1__DOT__dataW;
        IData/*31:0*/ top__DOT__design1__DOT__rs2_data;
        IData/*31:0*/ top__DOT__design1__DOT__ld_data;
        IData/*31:0*/ top__DOT__design1__DOT__wb_data;
        IData/*31:0*/ top__DOT__design1__DOT__data2_3;
        IData/*31:0*/ top__DOT__design1__DOT__opa_in;
        IData/*31:0*/ top__DOT__design1__DOT__opb_in;
        IData/*31:0*/ top__DOT__design1__DOT__aludata_3;
        IData/*31:0*/ top__DOT__design1__DOT__regfile__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__design1__DOT__lsu__DOT____Vxrand_h96fd10a2__0;
        IData/*31:0*/ top__DOT__design1__DOT__lsu__DOT__i;
        IData/*31:0*/ top__DOT__design1__DOT__lsu__DOT____Vlvbound_h5cc24e09__0;
        IData/*31:0*/ top__DOT__design1__DOT__lsu__DOT____Vlvbound_h8560297b__0;
        VlUnpacked<IData/*31:0*/, 2048> top__DOT__design1__DOT__imem__DOT__inst_mem;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__design1__DOT__regfile__DOT__register;
        VlUnpacked<IData/*31:0*/, 1536> top__DOT__design1__DOT__lsu__DOT__dmem;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
