// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.testbench__DOT__data_out) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__data_out__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.testbench__DOT__serial_out) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__serial_out__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.set(3U, ((~ (IData)(vlSelfRef.testbench__DOT__rst_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.set(4U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__data_out__0 
        = vlSelfRef.testbench__DOT__data_out;
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__serial_out__0 
        = vlSelfRef.testbench__DOT__serial_out;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__rst_n__0 
        = vlSelfRef.testbench__DOT__rst_n;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF_NX("Time: %0t | data_out: %b | serial_out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,10,
                     (IData)(vlSelfRef.testbench__DOT__data_out),
                     1,vlSelfRef.testbench__DOT__serial_out);
    }
}
