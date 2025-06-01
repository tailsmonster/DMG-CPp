// << DMG-CPU/Sharp LR35902/Sharp SM83 >> //
#include <iostream>
#include <stdlib.h>
#include "sm83.hpp"

void SM83::reset() {
  A = 0x01; F = 0xB0;
  B = 0x00; C = 0x13;
  D = 0x00; E = 0xD8;
  H = 0x01; L = 0x4D;
  PC = 0x0100; // Program Counter
  SP = 0xFFFE; // Stack Pointer
} 

void SM83::execNextInstruction() {
  
} 
