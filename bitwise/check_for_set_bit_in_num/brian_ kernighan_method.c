#include <stdio.h>

unsigned int getSetBitsCountByBrianMethod(int n)
{
    unsigned int count = 0;
    while (n)
    {
        n &= (n - 1);
        count++;
    }
    return count;
}

unsigned int getSetBitsCountByBrianMethodByRecursion(int n)
{
    if (n == 0)
        return 0;
    else
    {
        return 1 + getSetBitsCountByBrianMethod(n & (n - 1));
    }
}

int main()
{
    int n = 25;
    int count = getSetBitsCountByBrianMethod(n);
    printf("\nUsing Brian Method, we got count is %d ", count);
    count = getSetBitsCountByBrianMethodByRecursion(n);
    printf("\nUsing Brian RecursionMethod , we got count is %d \n", count);

    return 0;
}