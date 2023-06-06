#ifndef FLOP_ALU_H
#define FLOP_ALU_H

#include <stdint.h>
#include "flags.h"

uint8_t flopAdd(uint8_t a, uint8_t b, uint8_t *flags);

uint8_t flopSubtract(uint8_t a, uint8_t b, uint8_t *flags);

uint8_t flopAnd(uint8_t a, uint8_t b, uint8_t *flags);

uint8_t flopOr(uint8_t a, uint8_t b, uint8_t *flags);

uint8_t flopXor(uint8_t a, uint8_t b, uint8_t *flags);

uint8_t flopNot(uint8_t a, uint8_t *flags);

#endif