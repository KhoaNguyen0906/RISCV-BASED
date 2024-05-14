// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    VL_READMEM_N(true, 32, 2048, 0, std::string{"imem.mem"}
                 ,  &(vlSelf->top__DOT__design1__DOT__imem__DOT__inst_mem)
                 , 0, ~0ULL);
    vlSelf->top__DOT__design1__DOT__lsu__DOT____Vxrand_h96fd10a2__0 
        = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__pc__DOT__state = 0U;
    vlSelf->top__DOT__design1__DOT__stalling_signal = 0U;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem[0x500U] 
        = vlSelf->io_sw_i;
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
    vlSelf->top__DOT__design1__DOT__aludata_3 = vlSelf->top__DOT__design1__DOT__aludata;
    if (vlSelf->rst_ni) {
        vlSelf->top__DOT__design1__DOT__forward_a_select = 0U;
        vlSelf->top__DOT__design1__DOT__forward_b_select = 0U;
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
    vlSelf->top__DOT__design1__DOT__nxtpc = ((IData)(vlSelf->top__DOT__design1__DOT__br_select_out1)
                                              ? vlSelf->top__DOT__design1__DOT__aludata
                                              : ((IData)(4U) 
                                                 + (IData)(vlSelf->top__DOT__design1__DOT__pc_ins)));
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
    vlSelf->top__DOT__design1__DOT__ins = vlSelf->top__DOT__design1__DOT__imem__DOT__inst_mem
        [(0x7ffU & ((IData)(vlSelf->top__DOT__design1__DOT__pc_ins) 
                    >> 2U))];
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
    vlSelf->top__DOT__design1__DOT__stalling_signal 
        = ((3U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))
            ? 1U : 0U);
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

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_sw_i = VL_RAND_RESET_I(32);
    vlSelf->io_lcd_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledg_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledr_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex0_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex1_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex2_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex3_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex4_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex5_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex6_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex7_o = VL_RAND_RESET_I(32);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__imm_sto_out = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__design1__DOT__br_select_out1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__brunsigned_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__aludata_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__rd2_3 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__design1__DOT__rd3_4 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__design1__DOT__rd4_reg = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__design1__DOT__pc_muxa = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__imm_muxout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__data1_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__data2_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__pc_o1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__pc_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__ins_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__pc_o2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__pc_o3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__nxtpc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__pc_ins = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__design1__DOT__ins = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__data_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__immgen_mux = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__opa = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__opb = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__aludata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__brless = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__brequal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__rd_wren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__brunsigned = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__alu_opcode = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__design1__DOT__br_select = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__op_a_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__op_a_sel_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__op_b_sel_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__op_b_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__imm_sel = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__design1__DOT__imm_sto = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__design1__DOT__dataW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__design1__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__ld_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__mem_wren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__wb_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__imm_sel_3_4 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__design1__DOT__imm_sel_4_o = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__design1__DOT__imm_sel_o_data = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__design1__DOT__rd_wreno2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__rd_wreno3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__rd_wren_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__imm_sto_out2 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__design1__DOT__mem_wren2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__mem_wren3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__wb_sel2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__design1__DOT__wb_sel3 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__design1__DOT__op_o2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__design1__DOT__op_sto = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__design1__DOT__op_load = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__design1__DOT__data2_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__opa_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__opb_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__Rs1_F = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__design1__DOT__Rs2_F = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__design1__DOT__forward_a_select = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__design1__DOT__forward_b_select = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__design1__DOT__stalling_signal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__aludata_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT____Vcellout__pipe2__alu_op_o = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__design1__DOT__pc__DOT__state = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        vlSelf->top__DOT__design1__DOT__imem__DOT__inst_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__design1__DOT__regfile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__design1__DOT__lsu__DOT____Vxrand_h96fd10a2__0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1536; ++__Vi0) {
        vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__design1__DOT__lsu__DOT__i = 0;
    vlSelf->top__DOT__design1__DOT__lsu__DOT____Vlvbound_h5cc24e09__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__lsu__DOT____Vlvbound_h8560297b__0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
