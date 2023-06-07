#include "alu.h"


uint8_t flopAdd(uint8_t a, uint8_t b, uint8_t *flags){
    uint8_t f = *flags;
    uint8_t carryIn = checkFlag(f, CARRY_FLAG);
    uint8_t sum = (a + b + carryIn);
    if(sum < a || sum < b){
        setFlag(flags, CARRY_FLAG);
    } else {
        clearFlag(flags, CARRY_FLAG);
    }
    if(sum == 0){
        setFlag(flags, ZERO_FLAG);
    } else {
        clearFlag(flags, ZERO_FLAG);
    }
    return sum;
}

uint8_t flopSubtract(uint8_t a, uint8_t b, uint8_t *flags){
    uint8_t f = *flags;
    uint8_t carryIn = 1 - checkFlag(f, CARRY_FLAG);
    uint8_t dif = ((uint16_t)(a) - (b + carryIn));
    if(dif > a || dif > b){
        setFlag(flags, CARRY_FLAG);
    } else {
        clearFlag(flags, CARRY_FLAG);
    }
    if(dif == 0){
        setFlag(flags, ZERO_FLAG);
    } else {
        clearFlag(flags, ZERO_FLAG);
    }
    return dif;
}

uint8_t flopAnd(uint8_t a, uint8_t b, uint8_t *flags){
    uint8_t res = (a & b);
    if(res == 0){
        setFlag(flags, ZERO_FLAG);
    } else {
        clearFlag(flags, ZERO_FLAG);
    }
    return res;
}

uint8_t flopOr(uint8_t a, uint8_t b, uint8_t *flags){
    uint8_t res = (a | b);
    if(res == 0){
        setFlag(flags, ZERO_FLAG);
    } else {
        clearFlag(flags, ZERO_FLAG);
    }
    return res;
}

uint8_t flopXor(uint8_t a, uint8_t b, uint8_t *flags){
    uint8_t res = (a ^ b);
    if(res == 0){
        setFlag(flags, ZERO_FLAG);
    } else {
        clearFlag(flags, ZERO_FLAG);
    }
    return res;
}

uint8_t flopNot(uint8_t a, uint8_t *flags){
    uint8_t res = ~(a);
    if(res == 0){
        setFlag(flags, ZERO_FLAG);
    } else {
        clearFlag(flags, ZERO_FLAG);
    }
    return res;
}