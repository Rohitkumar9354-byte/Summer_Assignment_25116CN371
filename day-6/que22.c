//Write a program to Convert binary to decimal

#include <stdio.h>

int main()
{
    long long bin;
    int dec = 0;
    int base = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &bin);

    while (bin > 0)
    {
        int digit = bin % 10;
        dec = dec + digit * base;
        base = base * 2;
        bin = bin / 10;
    }
    printf("Decimal Number = %d", dec);

    return 0;
}