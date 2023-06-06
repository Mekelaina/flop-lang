#ifndef FLOP_STACK_H
#define FLOP_STACK_H

#include "vm.h"

static void pushToStack(VM *vm, uint8_t value);

static uint8_t popFromStack(VM *vm);

static void duplicateStackTop(VM *vm);

static void dropFromStack(VM * vm);

static uint8_t peakAtStack(VM *vm);

static void compareStack(VM *vm);


#endif