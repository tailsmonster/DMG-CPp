#pragma once

#include <cstdint>
#include <string>

typedef struct {
  uint8_t entry[4];
  uint8_t logo[0x30];
  
  std::string title;
  
}