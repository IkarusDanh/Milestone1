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
    IData/*31:0*/ __Vdly__top__DOT__dut__DOT__temp;
    // Body
    __Vdly__top__DOT__dut__DOT__temp = vlSelf->top__DOT__dut__DOT__temp;
    if (vlSelf->Nickel_i) {
        __Vdly__top__DOT__dut__DOT__temp = ((IData)(5U) 
                                            + vlSelf->top__DOT__dut__DOT__temp);
    } else if (vlSelf->Dime_i) {
        __Vdly__top__DOT__dut__DOT__temp = ((IData)(0xaU) 
                                            + vlSelf->top__DOT__dut__DOT__temp);
    } else if (vlSelf->Quarter_i) {
        __Vdly__top__DOT__dut__DOT__temp = ((IData)(0x19U) 
                                            + vlSelf->top__DOT__dut__DOT__temp);
    }
    if (VL_LTES_III(32, 0x14U, vlSelf->top__DOT__dut__DOT__temp)) {
        vlSelf->soda_o = 1U;
        if ((0U == (vlSelf->top__DOT__dut__DOT__temp 
                    - (IData)(0x14U)))) {
            vlSelf->change_o = 0U;
            __Vdly__top__DOT__dut__DOT__temp = 0U;
        } else if ((5U == (vlSelf->top__DOT__dut__DOT__temp 
                           - (IData)(0x14U)))) {
            vlSelf->change_o = 1U;
            __Vdly__top__DOT__dut__DOT__temp = 0U;
        } else if ((0xaU == (vlSelf->top__DOT__dut__DOT__temp 
                             - (IData)(0x14U)))) {
            vlSelf->change_o = 2U;
            __Vdly__top__DOT__dut__DOT__temp = 0U;
        } else if ((0xfU == (vlSelf->top__DOT__dut__DOT__temp 
                             - (IData)(0x14U)))) {
            vlSelf->change_o = 3U;
            __Vdly__top__DOT__dut__DOT__temp = 0U;
        } else if ((0x14U == (vlSelf->top__DOT__dut__DOT__temp 
                              - (IData)(0x14U)))) {
            vlSelf->change_o = 4U;
            __Vdly__top__DOT__dut__DOT__temp = 0U;
        } else {
            vlSelf->change_o = 0U;
        }
    } else {
        vlSelf->soda_o = 0U;
        vlSelf->change_o = 0U;
    }
    vlSelf->top__DOT__dut__DOT__temp = __Vdly__top__DOT__dut__DOT__temp;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->Nickel_i & 0xfeU))) {
        Verilated::overWidthError("Nickel_i");}
    if (VL_UNLIKELY((vlSelf->Dime_i & 0xfeU))) {
        Verilated::overWidthError("Dime_i");}
    if (VL_UNLIKELY((vlSelf->Quarter_i & 0xfeU))) {
        Verilated::overWidthError("Quarter_i");}
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
}
#endif  // VL_DEBUG
