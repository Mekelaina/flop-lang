#include "flags.h"


int checkFlag(uint8_t flags, uint8_t check){
    return (flags & check);
}

void setFlag(uint8_t *flags, uint8_t check){
    uint8_t val = *flags;
    *flags = (val | check);
}

void clearFlag(uint8_t *flags, uint8_t check){
    uint8_t val = *flags;
    *flags = (val & ~check);
}