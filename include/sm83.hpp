// << DMG-CPU/Sharp LR35902/Sharp SM83 HEADER >> //
#pragma once
#include <cstdint> // We need uint8_t and uint16_t datatypes ~ The Gameboy's CPU is an 8-bit processor, with 8-bit and 16-bit registers. //

class SM83 {
  public:
    uint8_t A, B, C, D, E, F, H, L; //A is the main register for logic and arithmitic / B-E are general purpose registers / F stores CPU status flags 
    uint16_t PC, SP; //Program Counter (stores the current instruction address), Stack Pointer (points to the top of the stack in memory)

    void reset(); //inits cpu
    void execNextInstruction(); //fetch, decode, and execute next opcode
};

