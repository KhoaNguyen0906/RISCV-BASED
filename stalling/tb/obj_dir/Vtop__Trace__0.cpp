// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__design1__DOT__imm_sto_out),3);
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__design1__DOT__br_select_out1));
        bufp->chgBit(oldp+2,((1U & (IData)(vlSelf->top__DOT__design1__DOT____Vcellout__pipe2__alu_op_o))));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__design1__DOT__brunsigned_o));
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__design1__DOT__aludata_o),32);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__design1__DOT__rd2_3),5);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__design1__DOT__rd3_4),5);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__design1__DOT__rd4_reg),5);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__design1__DOT__pc_muxa),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__design1__DOT__imm_muxout),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__design1__DOT__data1_out),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__design1__DOT__data2_out),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__design1__DOT__pc_o1),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__design1__DOT__pc_o),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__design1__DOT__ins_out),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__design1__DOT__pc_o2),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__design1__DOT__pc_o3),32);
        bufp->chgIData(oldp+17,(((IData)(4U) + (IData)(vlSelf->top__DOT__design1__DOT__pc_ins))),32);
        bufp->chgIData(oldp+18,(((IData)(vlSelf->top__DOT__design1__DOT__br_select_out1)
                                  ? vlSelf->top__DOT__design1__DOT__aludata
                                  : ((IData)(4U) + (IData)(vlSelf->top__DOT__design1__DOT__pc_ins)))),32);
        bufp->chgSData(oldp+19,(vlSelf->top__DOT__design1__DOT__pc_ins),13);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__design1__DOT__ins),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register
                                [(0x1fU & (vlSelf->top__DOT__design1__DOT__ins_out 
                                           >> 0xfU))]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__design1__DOT__data_2),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__design1__DOT__immgen_mux),32);
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__design1__DOT__brless));
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__design1__DOT__brequal));
        bufp->chgBit(oldp+26,(vlSelf->top__DOT__design1__DOT__rd_wren));
        bufp->chgBit(oldp+27,(vlSelf->top__DOT__design1__DOT__brunsigned));
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__design1__DOT__alu_opcode),4);
        bufp->chgBit(oldp+29,(vlSelf->top__DOT__design1__DOT__br_select));
        bufp->chgBit(oldp+30,(vlSelf->top__DOT__design1__DOT__op_a_sel));
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__design1__DOT__op_a_sel_o));
        bufp->chgBit(oldp+32,(vlSelf->top__DOT__design1__DOT__op_b_sel_o));
        bufp->chgBit(oldp+33,(vlSelf->top__DOT__design1__DOT__op_b_sel));
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__design1__DOT__imm_sel),3);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__design1__DOT__imm_sto),3);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__design1__DOT__dataW),32);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__design1__DOT__wb_sel),2);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__design1__DOT__rs2_data),32);
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__design1__DOT__mem_wren));
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__design1__DOT__wb_data),32);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__design1__DOT__imm_sel_3_4),3);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__design1__DOT__imm_sel_4_o),3);
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__design1__DOT__imm_sel_o_data),3);
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__design1__DOT__rd_wreno2));
        bufp->chgBit(oldp+45,(vlSelf->top__DOT__design1__DOT__rd_wreno3));
        bufp->chgBit(oldp+46,(vlSelf->top__DOT__design1__DOT__rd_wren_out));
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__design1__DOT__imm_sto_out2),3);
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__design1__DOT__mem_wren2));
        bufp->chgBit(oldp+49,(vlSelf->top__DOT__design1__DOT__mem_wren3));
        bufp->chgCData(oldp+50,(vlSelf->top__DOT__design1__DOT__wb_sel2),2);
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__design1__DOT__wb_sel3),2);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__design1__DOT__op_o2),5);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__design1__DOT__op_sto),5);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__design1__DOT__op_load),5);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__design1__DOT__data2_3),32);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__design1__DOT__Rs1_F),5);
        bufp->chgCData(oldp+57,(vlSelf->top__DOT__design1__DOT__Rs2_F),5);
        bufp->chgBit(oldp+58,(vlSelf->top__DOT__design1__DOT__stalling_signal));
        bufp->chgCData(oldp+59,((1U & (IData)(vlSelf->top__DOT__design1__DOT____Vcellout__pipe2__alu_op_o))),4);
        bufp->chgCData(oldp+60,((0x7fU & vlSelf->top__DOT__design1__DOT__ins_out)),7);
        bufp->chgCData(oldp+61,((7U & (vlSelf->top__DOT__design1__DOT__ins_out 
                                       >> 0xcU))),3);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__design1__DOT__pc_ins),32);
        bufp->chgSData(oldp+63,((0x7ffU & ((IData)(vlSelf->top__DOT__design1__DOT__pc_ins) 
                                           >> 2U))),11);
        bufp->chgCData(oldp+64,((0x7fU & vlSelf->top__DOT__design1__DOT__ins)),7);
        bufp->chgCData(oldp+65,((7U & (vlSelf->top__DOT__design1__DOT__ins 
                                       >> 0xcU))),3);
        bufp->chgSData(oldp+66,((0x7ffU & vlSelf->top__DOT__design1__DOT__aludata_o)),11);
        bufp->chgSData(oldp+67,((0x1fffU & ((IData)(vlSelf->top__DOT__design1__DOT__br_select_out1)
                                             ? vlSelf->top__DOT__design1__DOT__aludata
                                             : ((IData)(4U) 
                                                + (IData)(vlSelf->top__DOT__design1__DOT__pc_ins))))),13);
        bufp->chgBit(oldp+68,(vlSelf->top__DOT__design1__DOT__pc__DOT__state));
        bufp->chgCData(oldp+69,((0x1fU & (vlSelf->top__DOT__design1__DOT__ins_out 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+70,((0x1fU & (vlSelf->top__DOT__design1__DOT__ins_out 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+71,((0x1fU & (vlSelf->top__DOT__design1__DOT__ins_out 
                                          >> 2U))),5);
        bufp->chgCData(oldp+72,(vlSelf->top__DOT__design1__DOT____Vcellout__pipe2__alu_op_o),4);
        bufp->chgCData(oldp+73,((0x1fU & (vlSelf->top__DOT__design1__DOT__ins_out 
                                          >> 7U))),5);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0]),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[1]),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[2]),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[3]),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[4]),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[5]),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[6]),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[7]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[8]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[9]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[10]),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[11]),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[12]),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[13]),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[14]),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[15]),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[16]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[17]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[18]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[19]),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[20]),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[21]),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[22]),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[23]),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[24]),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[25]),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[26]),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[27]),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[28]),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[29]),32);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[30]),32);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[31]),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__design1__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__design1__DOT__opa),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__design1__DOT__opb),32);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__design1__DOT__ld_data),32);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__design1__DOT__opa_in),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__design1__DOT__opb_in),32);
        bufp->chgCData(oldp+112,(vlSelf->top__DOT__design1__DOT__forward_a_select),2);
        bufp->chgCData(oldp+113,(vlSelf->top__DOT__design1__DOT__forward_b_select),2);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__design1__DOT__aludata_3),32);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__design1__DOT__lsu__DOT__i),32);
    }
    bufp->chgIData(oldp+116,(vlSelf->io_sw_i),32);
    bufp->chgIData(oldp+117,(vlSelf->io_lcd_o),32);
    bufp->chgIData(oldp+118,(vlSelf->io_ledg_o),32);
    bufp->chgIData(oldp+119,(vlSelf->io_ledr_o),32);
    bufp->chgIData(oldp+120,(vlSelf->io_hex0_o),32);
    bufp->chgIData(oldp+121,(vlSelf->io_hex1_o),32);
    bufp->chgIData(oldp+122,(vlSelf->io_hex2_o),32);
    bufp->chgIData(oldp+123,(vlSelf->io_hex3_o),32);
    bufp->chgIData(oldp+124,(vlSelf->io_hex4_o),32);
    bufp->chgIData(oldp+125,(vlSelf->io_hex5_o),32);
    bufp->chgIData(oldp+126,(vlSelf->io_hex6_o),32);
    bufp->chgIData(oldp+127,(vlSelf->io_hex7_o),32);
    bufp->chgBit(oldp+128,(vlSelf->clk_i));
    bufp->chgBit(oldp+129,(vlSelf->rst_ni));
    bufp->chgIData(oldp+130,(((2U & (IData)(vlSelf->top__DOT__design1__DOT__wb_sel3))
                               ? vlSelf->top__DOT__design1__DOT__pc_o3
                               : ((1U & (IData)(vlSelf->top__DOT__design1__DOT__wb_sel3))
                                   ? vlSelf->top__DOT__design1__DOT__ld_data
                                   : vlSelf->top__DOT__design1__DOT__aludata_o))),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
