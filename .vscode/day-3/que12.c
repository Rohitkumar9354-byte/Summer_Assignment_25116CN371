#include<stdio.h>
int main ()  {

    int a, b, gcd, lcm, x, y, temp;

    printf("enter the first number:");
    scanf("%d", &a);

    printf("enter the second number:");
    scanf("%d", &b);

    x = a;
    y = b;

    while (y != 0)
    {
        temp = y;
        y = x%y;
        x = temp;
    }
    gcd = x;
    lcm = (a*b)/gcd;

    printf("LCM = %d\n",lcm);
    return 0; 
    
}

