#include "stack.h"

void pushToStack(VM *vm, uint8_t value){
    vm->Stack[vm->SP] = value;
    if(checkFlag(vm->Flags, FLIP_FLAG)){
        vm->SP--;
    } else {
        vm->SP++;
    }
}

uint8_t popFromStack(VM *vm){
    if(checkFlag(vm->Flags, FLIP_FLAG)){
        vm->SP++;    
    } else {
        vm->SP--;
    }
    uint8_t val = vm->Stack[vm->SP];
    vm->Stack[vm->SP] = 0;
    return val;
}

void duplicateStackTop(VM *vm){
    uint8_t val = 0;
    if(checkFlag(vm->Flags, FLIP_FLAG)){
        val = vm->Stack[vm->SP+1];
        vm->Stack[vm->SP] = val;
        vm->SP--;
    } else {
        val = vm->Stack[vm->SP-1];
        vm->Stack[vm->SP] = val;
        vm->SP++;
    }

}

void dropFromStack(VM *vm){
    if(checkFlag(vm->Flags, FLIP_FLAG)){
        vm->SP++;    
    } else {
        vm->SP--;
    }
    vm->Stack[vm->SP] = 0;
}

uint8_t peakAtStack(VM *vm){
    uint8_t val = 0;
    if(checkFlag(vm->Flags, FLIP_FLAG)){
        val = vm->Stack[vm->SP+1];    
    } else {
        val = vm->Stack[vm->SP-1];
    }
    return val;
}

void compareStack(VM *vm){
    uint8_t a, b = 0;
    if(checkFlag(vm->Flags, FLIP_FLAG)){
        a = vm->Stack[vm->SP+1];
        b = vm->Stack[vm->SP+2];
    } else {
        a = vm->Stack[vm->SP-1];
        b = vm->Stack[vm->SP-2];
    }

    if(a > b){
        clearFlag(&(vm->Flags), ZERO_FLAG);
        clearFlag(&(vm->Flags), CARRY_FLAG);
    } else if(a == b){
        setFlag(&(vm->Flags), ZERO_FLAG);
        clearFlag(&(vm->Flags), CARRY_FLAG);
    } else {
        clearFlag(&(vm->Flags), ZERO_FLAG);
        setFlag(&(vm->Flags), CARRY_FLAG);
    }   
}