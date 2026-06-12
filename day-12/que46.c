//Write a program to Write function for Armstrong.

#include<stdio.h>
int armstrong(int n) {
    int temp = n, sum = 0, rem;
    while (n>0)
    {
        rem = n%10;
        sum = sum + (rem*rem*rem);
        n = n/10;
    }
    return (temp == sum);
}
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
     if(armstrong(num)) 
     printf("%d is the armstrong number \n", num);
     else
     printf("%d is not armstrong number \n",num);
     return 0;
}