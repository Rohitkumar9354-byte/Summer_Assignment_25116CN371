//Write a program to Write function for palindrome.

#include<stdio.h>
int palindrome(int n) {
    int temp=n, rev=0, rem;
    while (n>0)
    {
        rem = n%10;
        rev = rev * 10 + rem;
        n = n/10;
    }
    return(temp==rev);
}
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if(palindrome(num))
    printf("%d is the palindrome number \n", num);
    else
    printf("%d is the not palindrome number \n", num);
    return 0;
}
