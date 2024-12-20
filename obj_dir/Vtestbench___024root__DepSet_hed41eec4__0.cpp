// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench___024root.h"

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_initial(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__data_out__0 
        = vlSelfRef.testbench__DOT__data_out;
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__serial_out__0 
        = vlSelfRef.testbench__DOT__serial_out;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__rst_n__0 
        = vlSelfRef.testbench__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__rst_n = 0U;
    vlSelfRef.testbench__DOT__data_in = 0U;
    vlSelfRef.testbench__DOT__shift_en = 0U;
    vlSelfRef.testbench__DOT__direction = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         36);
    vlSelfRef.testbench__DOT__rst_n = 1U;
    vlSelfRef.testbench__DOT__direction = 0U;
    vlSelfRef.testbench__DOT__shift_en = 1U;
    vlSelfRef.testbench__DOT__data_in = (1U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(2U)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         46);
    vlSelfRef.testbench__DOT__data_in = (1U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(2U)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         46);
    vlSelfRef.testbench__DOT__data_in = (1U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(2U)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         46);
    vlSelfRef.testbench__DOT__data_in = (1U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(2U)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         46);
    vlSelfRef.testbench__DOT__data_in = (1U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(2U)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         46);
    vlSelfRef.testbench__DOT__data_in = (1U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(2U)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         46);
    vlSelfRef.testbench__DOT__data_in = (1U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(2U)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         46);
    vlSelfRef.testbench__DOT__data_in = (1U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(2U)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         46);
    vlSelfRef.testbench__DOT__data_in = (1U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(2U)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         46);
    vlSelfRef.testbench__DOT__data_in = (1U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(2U)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         46);
    vlSelfRef.testbench__DOT__shift_en = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         51);
    vlSelfRef.testbench__DOT__direction = 1U;
    vlSelfRef.testbench__DOT__shift_en = 1U;
    vlSelfRef.testbench__DOT__data_in = (1U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(2U)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         60);
    vlSelfRef.testbench__DOT__data_in = (1U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(2U)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         60);
    vlSelfRef.testbench__DOT__data_in = (1U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(2U)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         60);
    vlSelfRef.testbench__DOT__data_in = (1U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(2U)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         60);
    vlSelfRef.testbench__DOT__data_in = (1U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(2U)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         60);
    vlSelfRef.testbench__DOT__data_in = (1U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(2U)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         60);
    vlSelfRef.testbench__DOT__data_in = (1U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(2U)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         60);
    vlSelfRef.testbench__DOT__data_in = (1U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(2U)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         60);
    vlSelfRef.testbench__DOT__data_in = (1U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(2U)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         60);
    vlSelfRef.testbench__DOT__data_in = (1U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(2U)));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "13/testbench.v", 
                                         60);
    VL_FINISH_MT("13/testbench.v", 64, "");
}

void Vtestbench___024root___eval_act(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf);
void Vtestbench___024root___nba_sequent__TOP__1(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__1(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.testbench__DOT__rst_n) {
        if (vlSelfRef.testbench__DOT__shift_en) {
            vlSelfRef.testbench__DOT__data_out = ((IData)(vlSelfRef.testbench__DOT__direction)
                                                   ? 
                                                  ((0x3feU 
                                                    & ((IData)(vlSelfRef.testbench__DOT__data_out) 
                                                       << 1U)) 
                                                   | (IData)(vlSelfRef.testbench__DOT__data_in))
                                                   : 
                                                  (((IData)(vlSelfRef.testbench__DOT__data_in) 
                                                    << 9U) 
                                                   | (0x1ffU 
                                                      & ((IData)(vlSelfRef.testbench__DOT__data_out) 
                                                         >> 1U))));
        }
    } else {
        vlSelfRef.testbench__DOT__data_out = 0U;
    }
    vlSelfRef.testbench__DOT__serial_out = (1U & (IData)(vlSelfRef.testbench__DOT__data_out));
}

void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf);

bool Vtestbench___024root___eval_phase__act(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtestbench___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtestbench___024root___timing_resume(vlSelf);
        Vtestbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtestbench___024root___eval_phase__nba(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtestbench___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtestbench___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("13/testbench.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtestbench___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("13/testbench.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtestbench___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtestbench___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtestbench___024root___eval_debug_assertions(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
