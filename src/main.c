#include <stdio.h>

#include "vm.h"

int main(){

    VM vm;

    uint8_t p[] = {0};
    initVM(&vm, &p[0], 1);

    printf("flag: %d\n", vm.Flags);

    setFlag(&(vm.Flags), ZERO_FLAG);

    printf("flag: %d\n", vm.Flags);

    setFlag(&(vm.Flags), HALT_FLAG);
    clearFlag(&(vm.Flags), ZERO_FLAG);
    printf("flag: %d\n", vm.Flags);


    return 0;
}