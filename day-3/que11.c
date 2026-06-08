//Write a program to Find GCD of two numbers.

#include<stdio.h>
int main()  {

    int a, b,  temp;

    printf("enter the first number:");
    scanf("%d", &a);

    printf("enter the second number:");
    scanf("%d",&b);

    while (b != 0)
    {
        temp = b; 
        b = a%b; 
        a = temp;

    }
    printf("GDc = %\n", a);
    return 0;
    
}