#include <stdio.h>

#include "vm.h"
#include "alu.h"

int main(){

    VM vm;

    uint8_t p[] = {0};
    initVM(&vm, &p[0], 1);

    // printf("flag: %d\n", vm.Flags);

    // setFlag(&(vm.Flags), ZERO_FLAG);

    // printf("flag: %d\n", vm.Flags);

    // setFlag(&(vm.Flags), HALT_FLAG);
    // clearFlag(&(vm.Flags), ZERO_FLAG);
    // printf("flag: %d\n", vm.Flags);

    uint8_t a = 250;
    uint8_t b = 7;
    uint8_t c = 9;
    uint8_t x = flopAdd(b, c, &(vm.Flags));
    printf("sum: %d, flags: %d\n", x, vm.Flags);
    x = flopAdd(a, b, &(vm.Flags));
    printf("sum: %d, flags: %d\n", x, vm.Flags);

    return 0;
}