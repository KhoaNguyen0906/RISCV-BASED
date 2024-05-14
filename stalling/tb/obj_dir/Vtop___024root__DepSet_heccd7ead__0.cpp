// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    SData/*12:0*/ __Vdly__top__DOT__design1__DOT__pc_ins;
    CData/*0:0*/ __Vdlyvset__top__DOT__design1__DOT__regfile__DOT__register__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__design1__DOT__regfile__DOT__register__v33;
    IData/*31:0*/ __Vdlyvval__top__DOT__design1__DOT__regfile__DOT__register__v33;
    CData/*0:0*/ __Vdlyvset__top__DOT__design1__DOT__regfile__DOT__register__v33;
    // Body
    __Vdly__top__DOT__design1__DOT__pc_ins = vlSelf->top__DOT__design1__DOT__pc_ins;
    __Vdlyvset__top__DOT__design1__DOT__regfile__DOT__register__v0 = 0U;
    __Vdlyvset__top__DOT__design1__DOT__regfile__DOT__register__v33 = 0U;
    vlSelf->top__DOT__design1__DOT__br_select_out1 
        = ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->top__DOT__design1__DOT__br_select));
    vlSelf->top__DOT__design1__DOT__brunsigned_o = 
        ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->top__DOT__design1__DOT__brunsigned));
    vlSelf->top__DOT__design1__DOT__op_a_sel_o = ((~ (IData)(vlSelf->rst_ni)) 
                                                  & (IData)(vlSelf->top__DOT__design1__DOT__op_a_sel));
    vlSelf->top__DOT__design1__DOT__op_b_sel_o = ((~ (IData)(vlSelf->rst_ni)) 
                                                  & (IData)(vlSelf->top__DOT__design1__DOT__op_b_sel));
    if (vlSelf->top__DOT__design1__DOT__pc__DOT__state) {
        if (vlSelf->top__DOT__design1__DOT__pc__DOT__state) {
            __Vdly__top__DOT__design1__DOT__pc_ins 
                = vlSelf->top__DOT__design1__DOT__pc_ins;
            vlSelf->top__DOT__design1__DOT__pc__DOT__state = 0U;
        }
    } else {
        __Vdly__top__DOT__design1__DOT__pc_ins = (0x1fffU 
                                                  & vlSelf->top__DOT__design1__DOT__nxtpc);
        vlSelf->top__DOT__design1__DOT__pc__DOT__state 
            = vlSelf->top__DOT__design1__DOT__stalling_signal;
    }
    vlSelf->top__DOT__design1__DOT__mem_wren3 = ((~ (IData)(vlSelf->rst_ni)) 
                                                 & (IData)(vlSelf->top__DOT__design1__DOT__mem_wren2));
    if ((8U == (IData)(vlSelf->top__DOT__design1__DOT__op_o2))) {
        if ((0U == (IData)(vlSelf->top__DOT__design1__DOT__imm_sto_out2))) {
            vlSelf->top__DOT__design1__DOT__rs2_data 
                = (((- (IData)((vlSelf->top__DOT__design1__DOT__opb_in 
                                >> 0x1fU))) << 8U) 
                   | (0xffU & vlSelf->top__DOT__design1__DOT__opb_in));
        } else if ((1U == (IData)(vlSelf->top__DOT__design1__DOT__imm_sto_out2))) {
            vlSelf->top__DOT__design1__DOT__rs2_data 
                = (((- (IData)((vlSelf->top__DOT__design1__DOT__opb_in 
                                >> 0x1fU))) << 0x10U) 
                   | (0xffffU & vlSelf->top__DOT__design1__DOT__opb_in));
        } else if ((2U == (IData)(vlSelf->top__DOT__design1__DOT__imm_sto_out2))) {
            vlSelf->top__DOT__design1__DOT__rs2_data 
                = vlSelf->top__DOT__design1__DOT__opb_in;
        }
    } else {
        vlSelf->top__DOT__design1__DOT__rs2_data = vlSelf->top__DOT__design1__DOT__opb_in;
    }
    if (vlSelf->rst_ni) {
        vlSelf->top__DOT__design1__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x21U;
        vlSelf->top__DOT__design1__DOT__data2_3 = 0U;
        vlSelf->top__DOT__design1__DOT____Vcellout__pipe2__alu_op_o = 0U;
        vlSelf->top__DOT__design1__DOT__imm_sto_out = 0U;
        vlSelf->top__DOT__design1__DOT__imm_muxout = 0U;
        vlSelf->top__DOT__design1__DOT__pc_muxa = 0U;
        vlSelf->top__DOT__design1__DOT__data2_out = 0U;
        vlSelf->top__DOT__design1__DOT__data1_out = 0U;
        vlSelf->top__DOT__design1__DOT__Rs2_F = 0U;
        vlSelf->top__DOT__design1__DOT__Rs1_F = 0U;
        vlSelf->top__DOT__design1__DOT__imm_sel_o_data = 0U;
        vlSelf->top__DOT__design1__DOT__op_load = 0U;
        vlSelf->top__DOT__design1__DOT__wb_data = 0U;
        __Vdlyvset__top__DOT__design1__DOT__regfile__DOT__register__v0 = 1U;
        vlSelf->top__DOT__design1__DOT__pc_o = 0U;
        vlSelf->top__DOT__design1__DOT__imm_sto_out2 = 0U;
        vlSelf->top__DOT__design1__DOT__imm_sel_4_o = 0U;
        vlSelf->top__DOT__design1__DOT__op_sto = 0U;
        vlSelf->top__DOT__design1__DOT__wb_sel3 = 0U;
        vlSelf->top__DOT__design1__DOT__pc_o3 = 0U;
        vlSelf->top__DOT__design1__DOT__aludata_o = 0U;
        vlSelf->top__DOT__design1__DOT__rd4_reg = 0U;
        vlSelf->top__DOT__design1__DOT__imm_sel_3_4 = 0U;
        vlSelf->top__DOT__design1__DOT__op_o2 = 0U;
        vlSelf->top__DOT__design1__DOT__wb_sel2 = 0U;
        vlSelf->top__DOT__design1__DOT__pc_o2 = 0U;
        vlSelf->top__DOT__design1__DOT__rd3_4 = 0U;
        vlSelf->top__DOT__design1__DOT__pc_o1 = 0U;
        vlSelf->top__DOT__design1__DOT__rd2_3 = 0U;
        vlSelf->top__DOT__design1__DOT__ins_out = 0U;
    } else {
        vlSelf->top__DOT__design1__DOT__data2_3 = vlSelf->top__DOT__design1__DOT__data_2;
        vlSelf->top__DOT__design1__DOT____Vcellout__pipe2__alu_op_o 
            = vlSelf->top__DOT__design1__DOT__alu_opcode;
        vlSelf->top__DOT__design1__DOT__imm_sto_out 
            = vlSelf->top__DOT__design1__DOT__imm_sto_out2;
        vlSelf->top__DOT__design1__DOT__imm_muxout 
            = vlSelf->top__DOT__design1__DOT__immgen_mux;
        vlSelf->top__DOT__design1__DOT__pc_muxa = vlSelf->top__DOT__design1__DOT__pc_o;
        vlSelf->top__DOT__design1__DOT__data2_out = vlSelf->top__DOT__design1__DOT__data_2;
        vlSelf->top__DOT__design1__DOT__data1_out = 
            vlSelf->top__DOT__design1__DOT__regfile__DOT__register
            [(0x1fU & (vlSelf->top__DOT__design1__DOT__ins_out 
                       >> 0xfU))];
        vlSelf->top__DOT__design1__DOT__Rs2_F = (0x1fU 
                                                 & (vlSelf->top__DOT__design1__DOT__ins_out 
                                                    >> 0x14U));
        vlSelf->top__DOT__design1__DOT__Rs1_F = (0x1fU 
                                                 & (vlSelf->top__DOT__design1__DOT__ins_out 
                                                    >> 0xfU));
        vlSelf->top__DOT__design1__DOT__imm_sel_o_data 
            = vlSelf->top__DOT__design1__DOT__imm_sel_4_o;
        vlSelf->top__DOT__design1__DOT__op_load = vlSelf->top__DOT__design1__DOT__op_sto;
        vlSelf->top__DOT__design1__DOT__wb_data = (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT__design1__DOT__wb_sel3))
                                                    ? vlSelf->top__DOT__design1__DOT__pc_o3
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__design1__DOT__wb_sel3))
                                                     ? vlSelf->top__DOT__design1__DOT__ld_data
                                                     : vlSelf->top__DOT__design1__DOT__aludata_o));
        if (vlSelf->top__DOT__design1__DOT__rd_wren_out) {
            __Vdlyvval__top__DOT__design1__DOT__regfile__DOT__register__v33 
                = vlSelf->top__DOT__design1__DOT__dataW;
            __Vdlyvset__top__DOT__design1__DOT__regfile__DOT__register__v33 = 1U;
            __Vdlyvdim0__top__DOT__design1__DOT__regfile__DOT__register__v33 
                = vlSelf->top__DOT__design1__DOT__rd4_reg;
        }
        vlSelf->top__DOT__design1__DOT__pc_o = vlSelf->top__DOT__design1__DOT__pc_ins;
        vlSelf->top__DOT__design1__DOT__imm_sto_out2 
            = vlSelf->top__DOT__design1__DOT__imm_sto;
        vlSelf->top__DOT__design1__DOT__imm_sel_4_o 
            = vlSelf->top__DOT__design1__DOT__imm_sel_3_4;
        vlSelf->top__DOT__design1__DOT__op_sto = vlSelf->top__DOT__design1__DOT__op_o2;
        vlSelf->top__DOT__design1__DOT__wb_sel3 = vlSelf->top__DOT__design1__DOT__wb_sel2;
        vlSelf->top__DOT__design1__DOT__pc_o3 = vlSelf->top__DOT__design1__DOT__pc_o2;
        vlSelf->top__DOT__design1__DOT__aludata_o = vlSelf->top__DOT__design1__DOT__aludata_3;
        vlSelf->top__DOT__design1__DOT__rd4_reg = vlSelf->top__DOT__design1__DOT__rd3_4;
        vlSelf->top__DOT__design1__DOT__imm_sel_3_4 
            = vlSelf->top__DOT__design1__DOT__imm_sel;
        vlSelf->top__DOT__design1__DOT__op_o2 = (0x1fU 
                                                 & (vlSelf->top__DOT__design1__DOT__ins_out 
                                                    >> 2U));
        vlSelf->top__DOT__design1__DOT__wb_sel2 = vlSelf->top__DOT__design1__DOT__wb_sel;
        vlSelf->top__DOT__design1__DOT__pc_o2 = vlSelf->top__DOT__design1__DOT__pc_o1;
        vlSelf->top__DOT__design1__DOT__rd3_4 = vlSelf->top__DOT__design1__DOT__rd2_3;
        vlSelf->top__DOT__design1__DOT__pc_o1 = ((IData)(4U) 
                                                 + (IData)(vlSelf->top__DOT__design1__DOT__pc_ins));
        vlSelf->top__DOT__design1__DOT__rd2_3 = (0x1fU 
                                                 & (vlSelf->top__DOT__design1__DOT__ins_out 
                                                    >> 7U));
        vlSelf->top__DOT__design1__DOT__ins_out = vlSelf->top__DOT__design1__DOT__ins;
    }
    if (__Vdlyvset__top__DOT__design1__DOT__regfile__DOT__register__v0) {
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[1U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[2U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[3U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[4U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[5U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[6U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[7U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[8U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[9U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0xaU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0xbU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0xcU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0xdU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0xeU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0xfU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x10U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x11U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x12U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x13U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x14U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x15U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x16U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x17U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x18U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x19U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x1aU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x1bU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x1cU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x1dU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x1eU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x1fU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0U] = 0U;
    }
    if (__Vdlyvset__top__DOT__design1__DOT__regfile__DOT__register__v33) {
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[__Vdlyvdim0__top__DOT__design1__DOT__regfile__DOT__register__v33] 
            = __Vdlyvval__top__DOT__design1__DOT__regfile__DOT__register__v33;
    }
    vlSelf->top__DOT__design1__DOT__immgen_mux = ((0x40U 
                                                   & vlSelf->top__DOT__design1__DOT__ins)
                                                   ? 
                                                  ((0x20U 
                                                    & vlSelf->top__DOT__design1__DOT__ins)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__design1__DOT__ins)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__design1__DOT__ins)
                                                      ? 
                                                     ((4U 
                                                       & vlSelf->top__DOT__design1__DOT__ins)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->top__DOT__design1__DOT__ins)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__design1__DOT__ins)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->top__DOT__design1__DOT__ins 
                                                                      >> 0x1fU))) 
                                                          << 0x14U) 
                                                         | ((0xff000U 
                                                             & vlSelf->top__DOT__design1__DOT__ins) 
                                                            | ((0x800U 
                                                                & (vlSelf->top__DOT__design1__DOT__ins 
                                                                   >> 9U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelf->top__DOT__design1__DOT__ins 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelf->top__DOT__design1__DOT__ins 
                                                                        >> 0x14U))))))
                                                         : 0U)
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__design1__DOT__ins)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->top__DOT__design1__DOT__ins)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__design1__DOT__ins)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->top__DOT__design1__DOT__ins 
                                                                      >> 0x1fU))) 
                                                          << 0xbU) 
                                                         | (0x7ffU 
                                                            & (vlSelf->top__DOT__design1__DOT__ins 
                                                               >> 0x14U)))
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & vlSelf->top__DOT__design1__DOT__ins)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__design1__DOT__ins)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->top__DOT__design1__DOT__ins 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | ((0x800U 
                                                             & (vlSelf->top__DOT__design1__DOT__ins 
                                                                << 4U)) 
                                                            | ((0x7e0U 
                                                                & (vlSelf->top__DOT__design1__DOT__ins 
                                                                   >> 0x14U)) 
                                                               | (0x1eU 
                                                                  & (vlSelf->top__DOT__design1__DOT__ins 
                                                                     >> 7U)))))
                                                         : 0U)
                                                        : 0U))))
                                                    : 0U)
                                                   : 
                                                  ((0x20U 
                                                    & vlSelf->top__DOT__design1__DOT__ins)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__design1__DOT__ins)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->top__DOT__design1__DOT__ins)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__design1__DOT__ins)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->top__DOT__design1__DOT__ins)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__design1__DOT__ins)
                                                         ? 
                                                        (0xfffff000U 
                                                         & vlSelf->top__DOT__design1__DOT__ins)
                                                         : 0U)
                                                        : 0U)
                                                       : 0U))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__design1__DOT__ins)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__design1__DOT__ins)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelf->top__DOT__design1__DOT__ins)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__design1__DOT__ins)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->top__DOT__design1__DOT__ins 
                                                                      >> 0x1fU))) 
                                                          << 0xbU) 
                                                         | ((0x7e0U 
                                                             & (vlSelf->top__DOT__design1__DOT__ins 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->top__DOT__design1__DOT__ins 
                                                                  >> 7U))))
                                                         : 0U)
                                                        : 0U))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__design1__DOT__ins)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->top__DOT__design1__DOT__ins)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__design1__DOT__ins)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->top__DOT__design1__DOT__ins)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__design1__DOT__ins)
                                                         ? 
                                                        (0xfffff000U 
                                                         & vlSelf->top__DOT__design1__DOT__ins)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & vlSelf->top__DOT__design1__DOT__ins)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__design1__DOT__ins)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->top__DOT__design1__DOT__ins 
                                                                      >> 0x1fU))) 
                                                          << 0xbU) 
                                                         | (0x7ffU 
                                                            & (vlSelf->top__DOT__design1__DOT__ins 
                                                               >> 0x14U)))
                                                         : 0U)
                                                        : 0U)))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__design1__DOT__ins)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__design1__DOT__ins)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelf->top__DOT__design1__DOT__ins)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__design1__DOT__ins)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->top__DOT__design1__DOT__ins 
                                                                      >> 0x1fU))) 
                                                          << 0xbU) 
                                                         | (0x7ffU 
                                                            & (vlSelf->top__DOT__design1__DOT__ins 
                                                               >> 0x14U)))
                                                         : 0U)
                                                        : 0U))))));
    vlSelf->top__DOT__design1__DOT__mem_wren2 = ((~ (IData)(vlSelf->rst_ni)) 
                                                 & (IData)(vlSelf->top__DOT__design1__DOT__mem_wren));
    vlSelf->top__DOT__design1__DOT__brequal = ((0U 
                                                == 
                                                ((IData)(1U) 
                                                 + 
                                                 (vlSelf->top__DOT__design1__DOT__data1_out 
                                                  + 
                                                  (~ vlSelf->top__DOT__design1__DOT__data2_out))))
                                                ? 1U
                                                : 0U);
    vlSelf->top__DOT__design1__DOT__brless = (1U & 
                                              ((IData)(vlSelf->top__DOT__design1__DOT__brunsigned_o)
                                                ? (
                                                   (0U 
                                                    != 
                                                    (((IData)(1U) 
                                                      + 
                                                      (vlSelf->top__DOT__design1__DOT__data1_out 
                                                       + 
                                                       (~ vlSelf->top__DOT__design1__DOT__data2_out))) 
                                                     >> 0x1fU))
                                                    ? 1U
                                                    : 0U)
                                                : (
                                                   ((0U 
                                                     != 
                                                     (((IData)(1U) 
                                                       + 
                                                       (vlSelf->top__DOT__design1__DOT__data1_out 
                                                        + 
                                                        (~ vlSelf->top__DOT__design1__DOT__data2_out))) 
                                                      >> 0x1fU)) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  ((vlSelf->top__DOT__design1__DOT__data1_out 
                                                                    ^ vlSelf->top__DOT__design1__DOT__data2_out) 
                                                                   >> 0x1fU)))))
                                                    ? 1U
                                                    : 0U)));
    if ((0U == (IData)(vlSelf->top__DOT__design1__DOT__op_load))) {
        if ((0U == (IData)(vlSelf->top__DOT__design1__DOT__imm_sel_o_data))) {
            vlSelf->top__DOT__design1__DOT__dataW = 
                (((- (IData)((vlSelf->top__DOT__design1__DOT__wb_data 
                              >> 0x1fU))) << 8U) | 
                 (0xffU & vlSelf->top__DOT__design1__DOT__wb_data));
        } else if ((1U == (IData)(vlSelf->top__DOT__design1__DOT__imm_sel_o_data))) {
            vlSelf->top__DOT__design1__DOT__dataW = 
                (((- (IData)((vlSelf->top__DOT__design1__DOT__wb_data 
                              >> 0x1fU))) << 0x10U) 
                 | (0xffffU & vlSelf->top__DOT__design1__DOT__wb_data));
        } else if ((4U == (IData)(vlSelf->top__DOT__design1__DOT__imm_sel_o_data))) {
            vlSelf->top__DOT__design1__DOT__dataW = 
                (0xffU & vlSelf->top__DOT__design1__DOT__wb_data);
        } else if ((5U == (IData)(vlSelf->top__DOT__design1__DOT__imm_sel_o_data))) {
            vlSelf->top__DOT__design1__DOT__dataW = 
                (0xffffU & vlSelf->top__DOT__design1__DOT__wb_data);
        } else if ((2U == (IData)(vlSelf->top__DOT__design1__DOT__imm_sel_o_data))) {
            vlSelf->top__DOT__design1__DOT__dataW = vlSelf->top__DOT__design1__DOT__wb_data;
        }
    } else {
        vlSelf->top__DOT__design1__DOT__dataW = vlSelf->top__DOT__design1__DOT__wb_data;
    }
    vlSelf->top__DOT__design1__DOT__rd_wren_out = (
                                                   (~ (IData)(vlSelf->rst_ni)) 
                                                   & (IData)(vlSelf->top__DOT__design1__DOT__rd_wreno3));
    vlSelf->top__DOT__design1__DOT__rd_wreno3 = ((~ (IData)(vlSelf->rst_ni)) 
                                                 & (IData)(vlSelf->top__DOT__design1__DOT__rd_wreno2));
    vlSelf->top__DOT__design1__DOT__rd_wreno2 = ((~ (IData)(vlSelf->rst_ni)) 
                                                 & (IData)(vlSelf->top__DOT__design1__DOT__rd_wren));
    vlSelf->top__DOT__design1__DOT__pc_ins = __Vdly__top__DOT__design1__DOT__pc_ins;
    vlSelf->top__DOT__design1__DOT__nxtpc = ((IData)(vlSelf->top__DOT__design1__DOT__br_select_out1)
                                              ? vlSelf->top__DOT__design1__DOT__aludata
                                              : ((IData)(4U) 
                                                 + (IData)(vlSelf->top__DOT__design1__DOT__pc_ins)));
    vlSelf->top__DOT__design1__DOT__ins = vlSelf->top__DOT__design1__DOT__imem__DOT__inst_mem
        [(0x7ffU & ((IData)(vlSelf->top__DOT__design1__DOT__pc_ins) 
                    >> 2U))];
    vlSelf->top__DOT__design1__DOT__stalling_signal 
        = ((3U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))
            ? 1U : 0U);
    if (((((((((0x33U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out)) 
               | (0x13U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) 
              | (0x23U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) 
             | (0x63U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) 
            | (0x37U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) 
           | (0x6fU == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) 
          | (3U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) 
         | (0x67U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out)))) {
        if ((0x33U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
            vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
            vlSelf->top__DOT__design1__DOT__wb_sel = 0U;
            vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
            if ((1U & (~ (vlSelf->top__DOT__design1__DOT__ins_out 
                          >> 0xeU)))) {
                if ((0x2000U & vlSelf->top__DOT__design1__DOT__ins_out)) {
                    if ((0x1000U & vlSelf->top__DOT__design1__DOT__ins_out)) {
                        vlSelf->top__DOT__design1__DOT__brunsigned = 1U;
                    }
                }
            }
            vlSelf->top__DOT__design1__DOT__mem_wren = 0U;
            vlSelf->top__DOT__design1__DOT__op_b_sel = 0U;
            vlSelf->top__DOT__design1__DOT__alu_opcode 
                = ((0x4000U & vlSelf->top__DOT__design1__DOT__ins_out)
                    ? ((0x2000U & vlSelf->top__DOT__design1__DOT__ins_out)
                        ? ((0x1000U & vlSelf->top__DOT__design1__DOT__ins_out)
                            ? 6U : 5U) : ((0x1000U 
                                           & vlSelf->top__DOT__design1__DOT__ins_out)
                                           ? ((0x40000000U 
                                               & vlSelf->top__DOT__design1__DOT__ins_out)
                                               ? 9U
                                               : 8U)
                                           : 4U)) : 
                   ((0x2000U & vlSelf->top__DOT__design1__DOT__ins_out)
                     ? ((0x1000U & vlSelf->top__DOT__design1__DOT__ins_out)
                         ? 3U : 2U) : ((0x1000U & vlSelf->top__DOT__design1__DOT__ins_out)
                                        ? 7U : ((0x40000000U 
                                                 & vlSelf->top__DOT__design1__DOT__ins_out)
                                                 ? 1U
                                                 : 0U))));
            vlSelf->top__DOT__design1__DOT__br_select = 0U;
        } else if ((0x13U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
            vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
            vlSelf->top__DOT__design1__DOT__wb_sel = 0U;
            vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
            if ((1U & (~ (vlSelf->top__DOT__design1__DOT__ins_out 
                          >> 0xeU)))) {
                if ((0x2000U & vlSelf->top__DOT__design1__DOT__ins_out)) {
                    if ((0x1000U & vlSelf->top__DOT__design1__DOT__ins_out)) {
                        vlSelf->top__DOT__design1__DOT__brunsigned = 1U;
                    }
                }
            }
            vlSelf->top__DOT__design1__DOT__mem_wren = 0U;
            vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
            vlSelf->top__DOT__design1__DOT__alu_opcode 
                = ((0x4000U & vlSelf->top__DOT__design1__DOT__ins_out)
                    ? ((0x2000U & vlSelf->top__DOT__design1__DOT__ins_out)
                        ? ((0x1000U & vlSelf->top__DOT__design1__DOT__ins_out)
                            ? 6U : 5U) : ((0x1000U 
                                           & vlSelf->top__DOT__design1__DOT__ins_out)
                                           ? ((0x40000000U 
                                               & vlSelf->top__DOT__design1__DOT__ins_out)
                                               ? 9U
                                               : 8U)
                                           : 4U)) : 
                   ((0x2000U & vlSelf->top__DOT__design1__DOT__ins_out)
                     ? ((0x1000U & vlSelf->top__DOT__design1__DOT__ins_out)
                         ? 3U : 2U) : ((0x1000U & vlSelf->top__DOT__design1__DOT__ins_out)
                                        ? 7U : 0U)));
            vlSelf->top__DOT__design1__DOT__br_select = 0U;
        } else {
            if ((0x23U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                if ((2U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                  >> 0xcU)))) {
                    vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
                    vlSelf->top__DOT__design1__DOT__rd_wren = 0U;
                    vlSelf->top__DOT__design1__DOT__mem_wren = 1U;
                    vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
                    vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                    vlSelf->top__DOT__design1__DOT__br_select = 0U;
                } else if ((0U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                         >> 0xcU)))) {
                    vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
                    vlSelf->top__DOT__design1__DOT__rd_wren = 0U;
                    vlSelf->top__DOT__design1__DOT__mem_wren = 1U;
                    vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
                    vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                    vlSelf->top__DOT__design1__DOT__br_select = 0U;
                } else if ((1U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                         >> 0xcU)))) {
                    vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
                    vlSelf->top__DOT__design1__DOT__rd_wren = 0U;
                    vlSelf->top__DOT__design1__DOT__mem_wren = 1U;
                    vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
                    vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                    vlSelf->top__DOT__design1__DOT__br_select = 0U;
                }
            } else {
                if ((0x63U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                    vlSelf->top__DOT__design1__DOT__op_a_sel = 1U;
                    vlSelf->top__DOT__design1__DOT__rd_wren = 0U;
                    vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
                    vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                    if ((0U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                      >> 0xcU)))) {
                        vlSelf->top__DOT__design1__DOT__br_select 
                            = ((IData)(vlSelf->top__DOT__design1__DOT__brequal)
                                ? 1U : 0U);
                    } else if ((1U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__design1__DOT__br_select 
                            = ((IData)(vlSelf->top__DOT__design1__DOT__brequal)
                                ? 0U : 1U);
                    } else if ((4U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__design1__DOT__br_select 
                            = ((IData)(vlSelf->top__DOT__design1__DOT__brless)
                                ? 1U : 0U);
                    } else if ((5U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__design1__DOT__br_select 
                            = ((IData)(vlSelf->top__DOT__design1__DOT__brless)
                                ? 0U : 1U);
                    } else if ((6U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__design1__DOT__br_select 
                            = ((IData)(vlSelf->top__DOT__design1__DOT__brless)
                                ? 1U : 0U);
                    } else if ((7U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__design1__DOT__br_select 
                            = ((IData)(vlSelf->top__DOT__design1__DOT__brless)
                                ? 0U : 1U);
                    }
                } else {
                    if ((0x37U != (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                        if ((0x6fU == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                            vlSelf->top__DOT__design1__DOT__op_a_sel = 1U;
                        } else if ((3U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                            if ((2U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                              >> 0xcU)))) {
                                vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
                            } else if ((0U == (7U & 
                                               (vlSelf->top__DOT__design1__DOT__ins_out 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
                            } else if ((1U == (7U & 
                                               (vlSelf->top__DOT__design1__DOT__ins_out 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
                            } else if ((4U == (7U & 
                                               (vlSelf->top__DOT__design1__DOT__ins_out 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
                            } else if ((5U == (7U & 
                                               (vlSelf->top__DOT__design1__DOT__ins_out 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
                            }
                        } else {
                            vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
                        }
                    }
                    if ((0x37U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                        vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
                        vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
                        vlSelf->top__DOT__design1__DOT__alu_opcode = 0xaU;
                        vlSelf->top__DOT__design1__DOT__br_select = 0U;
                    } else if ((0x6fU == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                        vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
                        vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
                        vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                        vlSelf->top__DOT__design1__DOT__br_select = 1U;
                    } else if ((3U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                        if ((2U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                          >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
                            vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
                            vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                            vlSelf->top__DOT__design1__DOT__br_select = 0U;
                        } else if ((0U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
                            vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
                            vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                            vlSelf->top__DOT__design1__DOT__br_select = 0U;
                        } else if ((1U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
                            vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
                            vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                            vlSelf->top__DOT__design1__DOT__br_select = 0U;
                        } else if ((4U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
                            vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
                            vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                            vlSelf->top__DOT__design1__DOT__br_select = 0U;
                        } else if ((5U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
                            vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
                            vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                            vlSelf->top__DOT__design1__DOT__br_select = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
                        vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
                        vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                        vlSelf->top__DOT__design1__DOT__br_select = 1U;
                    }
                }
                if ((0x63U != (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                    if ((0x37U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                        vlSelf->top__DOT__design1__DOT__mem_wren = 0U;
                    } else if ((0x6fU != (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                        if ((3U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                            if ((2U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                              >> 0xcU)))) {
                                vlSelf->top__DOT__design1__DOT__mem_wren = 0U;
                            } else if ((0U == (7U & 
                                               (vlSelf->top__DOT__design1__DOT__ins_out 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__design1__DOT__mem_wren = 0U;
                            } else if ((1U == (7U & 
                                               (vlSelf->top__DOT__design1__DOT__ins_out 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__design1__DOT__mem_wren = 0U;
                            } else if ((4U == (7U & 
                                               (vlSelf->top__DOT__design1__DOT__ins_out 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__design1__DOT__mem_wren = 0U;
                            } else if ((5U == (7U & 
                                               (vlSelf->top__DOT__design1__DOT__ins_out 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__design1__DOT__mem_wren = 0U;
                            }
                        } else {
                            vlSelf->top__DOT__design1__DOT__mem_wren = 0U;
                        }
                    }
                }
            }
            if ((0x23U != (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                if ((0x63U != (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                    if ((0x37U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                        vlSelf->top__DOT__design1__DOT__wb_sel = 0U;
                    } else if ((0x6fU == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                        vlSelf->top__DOT__design1__DOT__wb_sel = 2U;
                    } else if ((3U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                        if ((2U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                          >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__wb_sel = 1U;
                        } else if ((0U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__wb_sel = 1U;
                        } else if ((1U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__wb_sel = 1U;
                        } else if ((4U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__wb_sel = 1U;
                        } else if ((5U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__wb_sel = 1U;
                        }
                    } else {
                        vlSelf->top__DOT__design1__DOT__wb_sel = 3U;
                    }
                }
                if ((0x63U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                    if ((0U != (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                      >> 0xcU)))) {
                        if ((1U != (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                          >> 0xcU)))) {
                            if ((4U != (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                              >> 0xcU)))) {
                                if ((5U != (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                                  >> 0xcU)))) {
                                    if ((6U == (7U 
                                                & (vlSelf->top__DOT__design1__DOT__ins_out 
                                                   >> 0xcU)))) {
                                        vlSelf->top__DOT__design1__DOT__brunsigned = 1U;
                                    } else if ((7U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__design1__DOT__ins_out 
                                                    >> 0xcU)))) {
                                        vlSelf->top__DOT__design1__DOT__brunsigned = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x33U != (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
            if ((0x13U != (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                if ((0x23U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                    if ((2U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                      >> 0xcU)))) {
                        vlSelf->top__DOT__design1__DOT__imm_sto = 2U;
                    } else if ((0U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__design1__DOT__imm_sto = 0U;
                    } else if ((1U == (7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__design1__DOT__imm_sto = 1U;
                    }
                }
                if ((0x23U != (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                    if ((0x63U != (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                        if ((0x37U != (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                            if ((0x6fU != (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                                if ((3U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
                                    if ((2U == (7U 
                                                & (vlSelf->top__DOT__design1__DOT__ins_out 
                                                   >> 0xcU)))) {
                                        vlSelf->top__DOT__design1__DOT__imm_sel = 2U;
                                    } else if ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__design1__DOT__ins_out 
                                                    >> 0xcU)))) {
                                        vlSelf->top__DOT__design1__DOT__imm_sel = 0U;
                                    } else if ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__design1__DOT__ins_out 
                                                    >> 0xcU)))) {
                                        vlSelf->top__DOT__design1__DOT__imm_sel = 1U;
                                    } else if ((4U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__design1__DOT__ins_out 
                                                    >> 0xcU)))) {
                                        vlSelf->top__DOT__design1__DOT__imm_sel = 4U;
                                    } else if ((5U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__design1__DOT__ins_out 
                                                    >> 0xcU)))) {
                                        vlSelf->top__DOT__design1__DOT__imm_sel = 5U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x17U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins_out))) {
        vlSelf->top__DOT__design1__DOT__op_a_sel = 1U;
        vlSelf->top__DOT__design1__DOT__wb_sel = 0U;
        vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
        vlSelf->top__DOT__design1__DOT__mem_wren = 0U;
        vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
        vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
        vlSelf->top__DOT__design1__DOT__br_select = 0U;
    }
    vlSelf->top__DOT__design1__DOT__data_2 = vlSelf->top__DOT__design1__DOT__regfile__DOT__register
        [(0x1fU & (vlSelf->top__DOT__design1__DOT__ins_out 
                   >> 0x14U))];
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem[0x500U] 
        = vlSelf->io_sw_i;
    if (vlSelf->rst_ni) {
        vlSelf->top__DOT__design1__DOT__lsu__DOT__i = 0U;
        while (VL_GTS_III(32, 0x600U, vlSelf->top__DOT__design1__DOT__lsu__DOT__i)) {
            vlSelf->top__DOT__design1__DOT__lsu__DOT____Vlvbound_h5cc24e09__0 = 0U;
            if (VL_LIKELY((0x5ffU >= (0x7ffU & vlSelf->top__DOT__design1__DOT__lsu__DOT__i)))) {
                vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem[(0x7ffU 
                                                                & vlSelf->top__DOT__design1__DOT__lsu__DOT__i)] 
                    = vlSelf->top__DOT__design1__DOT__lsu__DOT____Vlvbound_h5cc24e09__0;
            }
            vlSelf->top__DOT__design1__DOT__lsu__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__design1__DOT__lsu__DOT__i);
        }
        vlSelf->top__DOT__design1__DOT__forward_a_select = 0U;
        vlSelf->top__DOT__design1__DOT__forward_b_select = 0U;
    } else {
        vlSelf->top__DOT__design1__DOT__forward_a_select 
            = ((((IData)(vlSelf->top__DOT__design1__DOT__rd_wreno3) 
                 & (0U != (IData)(vlSelf->top__DOT__design1__DOT__rd3_4))) 
                & ((IData)(vlSelf->top__DOT__design1__DOT__rd3_4) 
                   == (IData)(vlSelf->top__DOT__design1__DOT__Rs1_F)))
                ? 2U : ((((IData)(vlSelf->top__DOT__design1__DOT__rd_wren_out) 
                          & (0U != (IData)(vlSelf->top__DOT__design1__DOT__rd4_reg))) 
                         & ((IData)(vlSelf->top__DOT__design1__DOT__rd4_reg) 
                            == (IData)(vlSelf->top__DOT__design1__DOT__Rs1_F)))
                         ? 1U : 0U));
        vlSelf->top__DOT__design1__DOT__forward_b_select 
            = ((((IData)(vlSelf->top__DOT__design1__DOT__rd_wreno3) 
                 & (0U != (IData)(vlSelf->top__DOT__design1__DOT__rd3_4))) 
                & ((IData)(vlSelf->top__DOT__design1__DOT__rd3_4) 
                   == (IData)(vlSelf->top__DOT__design1__DOT__Rs2_F)))
                ? 2U : ((((IData)(vlSelf->top__DOT__design1__DOT__rd_wren_out) 
                          & (0U != (IData)(vlSelf->top__DOT__design1__DOT__rd4_reg))) 
                         & ((IData)(vlSelf->top__DOT__design1__DOT__rd4_reg) 
                            == (IData)(vlSelf->top__DOT__design1__DOT__Rs2_F)))
                         ? 1U : 0U));
    }
    if (vlSelf->top__DOT__design1__DOT__mem_wren3) {
        vlSelf->top__DOT__design1__DOT__lsu__DOT____Vlvbound_h8560297b__0 
            = vlSelf->top__DOT__design1__DOT__rs2_data;
        if ((0x5ffU >= (0x7ffU & vlSelf->top__DOT__design1__DOT__aludata_o))) {
            vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem[(0x7ffU 
                                                            & vlSelf->top__DOT__design1__DOT__aludata_o)] 
                = vlSelf->top__DOT__design1__DOT__lsu__DOT____Vlvbound_h8560297b__0;
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__design1__DOT__mem_wren3)))) {
        vlSelf->top__DOT__design1__DOT__ld_data = (
                                                   (0x5ffU 
                                                    >= 
                                                    (0x7ffU 
                                                     & vlSelf->top__DOT__design1__DOT__aludata_o))
                                                    ? 
                                                   vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
                                                   [
                                                   (0x7ffU 
                                                    & vlSelf->top__DOT__design1__DOT__aludata_o)]
                                                    : vlSelf->top__DOT__design1__DOT__lsu__DOT____Vxrand_h96fd10a2__0);
    }
    vlSelf->io_lcd_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x4a0U];
    vlSelf->io_ledg_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x490U];
    vlSelf->io_ledr_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x480U];
    vlSelf->io_hex0_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x400U];
    vlSelf->io_hex1_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x410U];
    vlSelf->io_hex2_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x420U];
    vlSelf->io_hex3_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x430U];
    vlSelf->io_hex4_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x440U];
    vlSelf->io_hex5_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x450U];
    vlSelf->io_hex6_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x460U];
    vlSelf->io_hex7_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x470U];
    if ((0U == (IData)(vlSelf->top__DOT__design1__DOT__forward_a_select))) {
        vlSelf->top__DOT__design1__DOT__opa_in = vlSelf->top__DOT__design1__DOT__data1_out;
    } else if ((1U == (IData)(vlSelf->top__DOT__design1__DOT__forward_a_select))) {
        vlSelf->top__DOT__design1__DOT__opa_in = vlSelf->top__DOT__design1__DOT__dataW;
    } else if ((2U == (IData)(vlSelf->top__DOT__design1__DOT__forward_a_select))) {
        vlSelf->top__DOT__design1__DOT__opa_in = vlSelf->top__DOT__design1__DOT__aludata;
    }
    if ((0U == (IData)(vlSelf->top__DOT__design1__DOT__forward_b_select))) {
        vlSelf->top__DOT__design1__DOT__opb_in = vlSelf->top__DOT__design1__DOT__data2_out;
    } else if ((1U == (IData)(vlSelf->top__DOT__design1__DOT__forward_b_select))) {
        vlSelf->top__DOT__design1__DOT__opb_in = vlSelf->top__DOT__design1__DOT__dataW;
    } else if ((2U == (IData)(vlSelf->top__DOT__design1__DOT__forward_b_select))) {
        vlSelf->top__DOT__design1__DOT__opb_in = vlSelf->top__DOT__design1__DOT__aludata_o;
    }
    vlSelf->top__DOT__design1__DOT__opa = ((IData)(vlSelf->top__DOT__design1__DOT__op_a_sel_o)
                                            ? vlSelf->top__DOT__design1__DOT__pc_muxa
                                            : vlSelf->top__DOT__design1__DOT__opa_in);
    vlSelf->top__DOT__design1__DOT__opb = ((IData)(vlSelf->top__DOT__design1__DOT__op_b_sel_o)
                                            ? vlSelf->top__DOT__design1__DOT__imm_muxout
                                            : vlSelf->top__DOT__design1__DOT__opb_in);
    vlSelf->top__DOT__design1__DOT__aludata_3 = ((1U 
                                                  & (IData)(vlSelf->top__DOT__design1__DOT____Vcellout__pipe2__alu_op_o))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__design1__DOT____Vcellout__pipe2__alu_op_o))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (vlSelf->top__DOT__design1__DOT__opa 
                                                    + 
                                                    (~ vlSelf->top__DOT__design1__DOT__opb)))
                                                   : 
                                                  (vlSelf->top__DOT__design1__DOT__opa 
                                                   << 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__design1__DOT__opb)))
                                                  : 
                                                 (vlSelf->top__DOT__design1__DOT__opa 
                                                  + vlSelf->top__DOT__design1__DOT__opb));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
}
#endif  // VL_DEBUG
