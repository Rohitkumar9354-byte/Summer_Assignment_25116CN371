// Write a program to Check whether a number is prime
#include <stdio.h>
int main()
{

    int n, i, prime = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n <= 1)
    {

        prime = 0;
    }
    else
    {
        for (i = 2; i <= n / 2; i++)
        {

            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }
    if (prime)
        printf("%d is a prime number", n);

    else
        printf("%d is NOT prime number", n);
    return 0;
}
