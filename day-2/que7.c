//Write a program to Find product of digits.

#include <stdio.h>
int main()
{
    int n,digit;
    int product = 1;
     printf("enter the number:");
     scanf("%d",&n);
     
     while(n>0)
     {
         digit = n%10;
         product = product * digit;
         n = n /10;
         }
         printf("product of digit = %d",product);
         
         return 0;
}
