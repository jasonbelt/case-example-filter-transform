#ifndef EXT_H
#define EXT_H

// This file will not be overwritten so is safe to edit

#include <all.h>

// bit-codec size for t_Data_Types_Temp_i
#define numBits_t_Data_Types_Temp_i 32
#define numBytes_t_Data_Types_Temp_i ((numBits_t_Data_Types_Temp_i - 1) / 8 + 1)

void byte_array_default(STACK_FRAME uint8_t* byteArray, size_t numBits, size_t numBytes);

void byte_array_string(STACK_FRAME String str, uint8_t* byteArray, size_t numBytes);

void hex_dump(STACK_FRAME uint8_t* byte_array, size_t numBytes);
#endif