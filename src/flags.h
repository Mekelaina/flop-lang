#ifndef FLOP_FLAGS_H
#define FLOP_FLAGS_H

#define ZERO_FLAG  0b00000001
#define CARRY_FLAG 0b00000010
#define FLIP_FLAG  0b00000100
#define HALT_FLAG  0b10000000

#include <stdint.h>

int checkFlag(uint8_t flags, uint8_t check);

void setFlag(uint8_t *flags, uint8_t check);

void clearFlag(uint8_t *flags, uint8_t check);

#endif