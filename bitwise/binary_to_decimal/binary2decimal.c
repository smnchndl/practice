#include <stdio.h>
int binaryToDecimal(int n)
{
    int temp = 0;
    int base = 1;
    int DecimalNumber;
    while (n)
    {
        temp = n % 10;
        n = n / 10;
        DecimalNumber += temp * base;
        base = base * 2;
    }
    return DecimalNumber;
}
int main()
{
    int n = 10101001;
    int DecimalNumber = binaryToDecimal(n);
    printf("\n Binary %d to Decimal %d\n", n, DecimalNumber);
    return 0;
}