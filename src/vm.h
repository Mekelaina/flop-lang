#ifndef FLOP_VM_H
#define FLOP_VM_H

#include <stdint.h>
#include "flags.h"

#define STACK_SIZE  256
#define IOBUFF_SIZE 16

typedef struct arch {
    uint8_t  Flags;                 // Flags register
    uint8_t  Stack[STACK_SIZE];     // Data stack
    uint8_t  X, Y;                  // X and Y registers
    uint8_t  SP;                    // Stack pointer
    uint8_t  OP;                    // Current OP
    uint16_t PC;                    // Program counter
    uint16_t SRJ;                   // Subroutine return address holding register
    uint16_t ProgSize;              // Length of program being executed
    uint8_t  *Program;              // Pointer to first byte in program to read
    uint8_t  IOBuffer[IOBUFF_SIZE]; // IO Buffer memory
} VM;

void initVM(VM *vm, uint8_t *program, uint16_t length);

void clock(VM *vm);


    
#endif