//JOSE FRANCISCO GONZALEZ is714557

#include "sodium.h"
int foo()
{
    char myString[64];
    uint32_t myInt;
    if (sodium_init() < 0)
        return 1;
    randombytes_buf(myString, 64);
    A
        myInt = randombytes_uniform(10);
}