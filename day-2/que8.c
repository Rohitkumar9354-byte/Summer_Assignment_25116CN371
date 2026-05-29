//Write a program to Check whether a number is palindrome

#include<stdio.h>
int main() {

    int n, original, reverse =0, remainder;

    printf("enter the number: ");
    scanf("%d", &n);

    original = n;

    while (n !=0)
    {
        remainder = n%10;
        reverse = reverse *10 + remainder;
        n = n/10;

    }
    if(original==reverse)
    printf("%d is the palindrome number", original);

    else
    printf("%d is the not palindrome number", original);

    return 0; 
    
}