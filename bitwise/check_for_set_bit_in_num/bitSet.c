#include <stdio.h>

/* Function to get no of set bits in binary
  representation of positive integer n */
unsigned int getSetBitsCount(unsigned int n)
{
    unsigned int count = 0;
    while (n)
    {
        count = n & 1;
        n >>= 1;
    }
    return count;
}

/* Test function countSetBits */
int main()
{
    int i = 16;
    printf("%d", getSetBitsCount(i));
    return 0;
}

/*
 To Run This file :
 
 On Mac:
 1.xcode-select --install
 2.gcc -Wall -o bit_set bit_Set.c
 3.clang program.c -o program
 4../program
 
 On Ubuntu:
 1.gcc -o bit_set bit_set.c //it will create .exe file
 2.bit_set //run .exe file
 
 Another Method:
 1.gcc bit_set.o -o bit_set.exe
 2. bit_set //run .exe file
 
 */