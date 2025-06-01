#pragma once

#include <common.hpp>
#include <cstdint>

uint8_t busRead(uint16_t address);
void busWrite(uint16_t address, uint8_t value);