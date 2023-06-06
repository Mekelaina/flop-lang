#include "vm.h"
#include "stack.h"

static void fetchInstruction(VM *vm){
    if(vm->PC < vm->ProgSize){
        vm->OP = *((vm->Program)+vm->PC);
        vm->PC++;
    }
}

static uint8_t fetchArg(VM *vm){
    uint8_t arg = 0;
    if(vm->PC < vm->ProgSize){
        arg = *((vm->Program)+vm->PC);
        vm->PC++;
    }
    return arg;
}

static void jumpToAddress(VM *vm, uint16_t address){
    vm->PC = address;
}

static void goSubroutine(VM *vm, uint16_t address){
    vm->SRJ = vm->PC+1;
    jumpToAddress(vm, address);
}

static void returnSubroutine(VM *vm){
    jumpToAddress(vm, vm->SRJ);
    vm->SRJ = 0;
}









void initVM(VM *vm, uint8_t *program, uint16_t length){
    vm->Flags = 0;
    vm->PC = 0;
    vm->SP = 0;
    vm->SRJ = 0;
    vm->X = 0;
    vm->Y = 0;

    vm->ProgSize = length;
    vm->Program = program;

    for(int i = 0; i < STACK_SIZE; ++i){
        vm->Stack[i] = 0;
    }

    for(int j = 0; j < IOBUFF_SIZE; ++j){
        vm->IOBuffer[j] = 0;
    }
}

void clock(VM *vm){

}