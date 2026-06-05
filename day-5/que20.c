//Write a program to Find largest prime factor

#include <stdio.h>

int main() {
    long long num;
    long long largestPrimeFactor = 0;
    long long i;

    printf("Enter a number: ");
    scanf("%lld", &num);

    for (i = 2; i <= num; i++) {
        while (num % i == 0) {
            largestPrimeFactor = i;
            num /= i;
        }
    }

    printf("Largest Prime Factor = %lld\n", largestPrimeFactor);

    return 0;
}