#include <stdio.h>

unsigned int recursionCheckBitsInNumber(int n)
{
    if (n == 0)
        return 0;

    return (n & 1) +
           recursionCheckBitsInNumber(n >> 1);
}

int main()
{
    int number = 7;
    int count = recursionCheckBitsInNumber(number);
    printf("%d", count);
    return count;
}