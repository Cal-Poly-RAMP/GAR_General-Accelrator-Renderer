// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("src/gpu.sv", 10, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->device_control_write_enable = VL_RAND_RESET_I(1);
    vlSelf->device_control_data = VL_RAND_RESET_I(8);
    vlSelf->program_mem_read_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->program_mem_read_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->program_mem_read_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->program_mem_read_data[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->data_mem_read_valid = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->data_mem_read_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->data_mem_read_ready = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->data_mem_read_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->data_mem_write_valid = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->data_mem_write_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->data_mem_write_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->data_mem_write_ready = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__device_control_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__device_control_data = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__program_mem_read_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__program_mem_read_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__program_mem_read_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__program_mem_read_data[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->gpu__DOT__data_mem_read_valid = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__data_mem_read_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__data_mem_read_ready = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__data_mem_read_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__data_mem_write_valid = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__data_mem_write_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__data_mem_write_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__data_mem_write_ready = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__thread_count = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__core_start = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__core_reset = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__core_done = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__core_block_id[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__core_thread_count[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->gpu__DOT__lsu_read_valid = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__lsu_read_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__lsu_read_ready = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__lsu_read_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__lsu_write_valid = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__lsu_write_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__lsu_write_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__lsu_write_ready = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__fetcher_read_valid = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__fetcher_read_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__fetcher_read_ready = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__fetcher_read_data[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_valid = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_valid = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__dcr_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__dcr_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__dcr_instance__DOT__device_control_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__dcr_instance__DOT__device_control_data = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__dcr_instance__DOT__thread_count = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__dcr_instance__DOT__device_conrol_register = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__data_memory_controller__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__data_memory_controller__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__data_memory_controller__DOT__consumer_read_valid = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__data_memory_controller__DOT__consumer_read_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__data_memory_controller__DOT__consumer_read_ready = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__data_memory_controller__DOT__consumer_read_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__data_memory_controller__DOT__consumer_write_valid = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__data_memory_controller__DOT__consumer_write_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__data_memory_controller__DOT__consumer_write_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__data_memory_controller__DOT__consumer_write_ready = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__data_memory_controller__DOT__mem_read_valid = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__data_memory_controller__DOT__mem_read_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__data_memory_controller__DOT__mem_read_ready = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__data_memory_controller__DOT__mem_read_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__data_memory_controller__DOT__mem_write_valid = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__data_memory_controller__DOT__mem_write_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__data_memory_controller__DOT__mem_write_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__data_memory_controller__DOT__mem_write_ready = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__data_memory_controller__DOT__controller_state[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__data_memory_controller__DOT__current_consumer[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->gpu__DOT__data_memory_controller__DOT__channel_serving_consumer = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__data_memory_controller__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0;
    vlSelf->gpu__DOT__program_memory_controller__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__program_memory_controller__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__program_memory_controller__DOT__consumer_read_valid = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__program_memory_controller__DOT__consumer_read_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__program_memory_controller__DOT__consumer_read_ready = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__program_memory_controller__DOT__consumer_read_data[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->gpu__DOT__program_memory_controller__DOT__consumer_write_valid = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__program_memory_controller__DOT__consumer_write_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__program_memory_controller__DOT__consumer_write_data[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->gpu__DOT__program_memory_controller__DOT__consumer_write_ready = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__program_memory_controller__DOT__mem_read_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__program_memory_controller__DOT__mem_read_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__program_memory_controller__DOT__mem_read_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__program_memory_controller__DOT__mem_read_data[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->gpu__DOT__program_memory_controller__DOT__mem_write_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__program_memory_controller__DOT__mem_write_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__program_memory_controller__DOT__mem_write_data[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->gpu__DOT__program_memory_controller__DOT__mem_write_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__program_memory_controller__DOT__controller_state[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__program_memory_controller__DOT__current_consumer[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->gpu__DOT__program_memory_controller__DOT__channel_serving_consumer = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__program_memory_controller__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->gpu__DOT__program_memory_controller__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->gpu__DOT__program_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0;
    vlSelf->gpu__DOT__program_memory_controller__DOT____Vlvbound_hf51c3ca2__0 = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__program_memory_controller__DOT____Vlvbound_h7796e796__0 = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__program_memory_controller__DOT____Vlvbound_h2fbf086c__0 = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__program_memory_controller__DOT____Vlvbound_hd1a26f10__0 = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__program_memory_controller__DOT____Vlvbound_hf51c3ca2__1 = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__program_memory_controller__DOT____Vlvbound_h198e8bbb__0 = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__program_memory_controller__DOT____Vlvbound_h7cba4470__0 = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__program_memory_controller__DOT____Vlvbound_h4c27d88a__0 = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__program_memory_controller__DOT____Vlvbound_hd1a26f10__1 = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__dispatch_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__dispatch_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__dispatch_instance__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__dispatch_instance__DOT__thread_count = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__dispatch_instance__DOT__core_done = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__dispatch_instance__DOT__core_start = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__dispatch_instance__DOT__core_reset = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__dispatch_instance__DOT__core_block_id[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__dispatch_instance__DOT__core_thread_count[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->gpu__DOT__dispatch_instance__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__dispatch_instance__DOT__total_blocks = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__dispatch_instance__DOT__blocks_dispatched = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__dispatch_instance__DOT__blocks_done = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__dispatch_instance__DOT__start_execution = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__dispatch_instance__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->gpu__DOT__dispatch_instance__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->gpu__DOT__dispatch_instance__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->gpu__DOT__dispatch_instance__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__block_id = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__thread_count = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__program_mem_read_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__program_mem_read_address = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__program_mem_read_ready = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__program_mem_read_data = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_valid = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_ready = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_valid = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_ready = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_index = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_ids[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups[__Vi0][__Vi1] = VL_RAND_RESET_I(3);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__masks[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rs_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rt_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_output_mux = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_pc_mux = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_ret = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____Vcellinp__warps__BRA__0__KET____DOT__alu_instance__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____Vcellinp__warps__BRA__1__KET____DOT__alu_instance__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____Vcellinp__threads__BRA__0__KET____DOT__register_instance__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____Vcellinp__threads__BRA__1__KET____DOT__register_instance__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____Vcellinp__threads__BRA__2__KET____DOT__register_instance__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT____Vcellinp__threads__BRA__3__KET____DOT__register_instance__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__current_pc = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_address = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_ready = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_data = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__instruction = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__instruction = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rd_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rs_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rt_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_input_mux = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_arithmetic_mux = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_output_mux = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_pc_mux = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_ret = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__thread_count = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_ret = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__fetcher_state = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_index = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups[__Vi0][__Vi1] = VL_RAND_RESET_I(3);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__masks[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__current_pc = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__start_warp = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__total_warps = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__any_lsu_waiting = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_states[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_status[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups[__Vi0][__Vi1] = VL_RAND_RESET_I(3);
        }
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__thread_count = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__total_warps = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_dispatched = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0;
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__warp = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_output_mux = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__rt = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__rt = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_ready = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_data = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_ready = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_pc_mux = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__current_pc = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__next_pc = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__nzp = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_output_mux = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__rt = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__rt = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_ready = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_data = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_ready = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_pc_mux = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__current_pc = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__next_pc = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__nzp = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__block_id = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rd_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rs_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rt_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_input_mux = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__lsu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rt = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__block_id = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rd_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rs_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rt_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_input_mux = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__lsu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rt = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__block_id = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rd_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rs_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rt_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_input_mux = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__lsu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rt = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__block_id = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rd_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rs_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rt_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_input_mux = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__lsu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rt = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__block_id = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__thread_count = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__program_mem_read_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__program_mem_read_address = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__program_mem_read_ready = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__program_mem_read_data = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_valid = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_ready = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_valid = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_address[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_ready = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_index = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_ids[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups[__Vi0][__Vi1] = VL_RAND_RESET_I(3);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__masks[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rs_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rt_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_output_mux = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_pc_mux = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_ret = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____Vcellinp__warps__BRA__0__KET____DOT__alu_instance__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____Vcellinp__warps__BRA__1__KET____DOT__alu_instance__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____Vcellinp__threads__BRA__0__KET____DOT__register_instance__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____Vcellinp__threads__BRA__1__KET____DOT__register_instance__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____Vcellinp__threads__BRA__2__KET____DOT__register_instance__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT____Vcellinp__threads__BRA__3__KET____DOT__register_instance__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__current_pc = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_address = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_ready = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_data = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__instruction = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__instruction = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rd_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rs_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rt_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_input_mux = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_arithmetic_mux = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_output_mux = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_pc_mux = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_ret = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__thread_count = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_ret = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__fetcher_state = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_index = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups[__Vi0][__Vi1] = VL_RAND_RESET_I(3);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__masks[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__current_pc = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__start_warp = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__total_warps = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__any_lsu_waiting = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_states[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_status[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups[__Vi0][__Vi1] = VL_RAND_RESET_I(3);
        }
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__thread_count = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__total_warps = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_dispatched = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0;
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__warp = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_output_mux = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__rt = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__rt = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_ready = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_data = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_ready = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_pc_mux = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__current_pc = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__next_pc = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__nzp = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_output_mux = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__rt = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__rt = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_ready = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_data = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_ready = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_pc_mux = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__current_pc = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__next_pc = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__nzp = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__block_id = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rd_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rs_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rt_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_input_mux = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__lsu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rt = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__block_id = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rd_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rs_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rt_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_input_mux = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__lsu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rt = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__block_id = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rd_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rs_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rt_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_input_mux = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__lsu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rt = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__block_id = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__core_state = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rd_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rs_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rt_address = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_input_mux = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_immediate = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__alu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__lsu_out = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rs = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rt = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
