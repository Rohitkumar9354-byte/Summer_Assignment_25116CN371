//Write a program to Write function to find factorial.

#include<stdio.h>
long long factorial(int n)
{
    long long fact=1;
    int i;
    for(i=1; i<=n; i++)  {
        fact *= i;
    }
    return fact;
}
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("factorial of %d = %11d", n, factorial(n));
    return 0;
}