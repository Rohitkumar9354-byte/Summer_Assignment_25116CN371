//Write a program to Recursive reverse number

#include <stdio.h>
int rev = 0;
int reverseNumber(int n) {
    if (n == 0)
        return rev;
    rev = rev * 10 + (n % 10);
    return reverseNumber(n / 10);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse number = %d\n", reverseNumber(num));
    return 0;
}