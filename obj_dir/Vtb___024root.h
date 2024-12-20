// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb__DOT__DUT__DOT____Vcellinp__lab6__clk;
    CData/*0:0*/ tb__DOT__CLOCK_50;
    CData/*0:0*/ __VdlyVal__tb__DOT__CLOCK_50__v0;
    CData/*0:0*/ __VdlySet__tb__DOT__CLOCK_50__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__DUT__DOT____Vcellinp__lab6__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ tb__DOT__LEDR;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
