//Write a program to Write function for perfect number.

#include<stdio.h>
int perfect(int n) {
    int i, sum =0;
    for(i=1; i<n; i++) {
        if(n%i==0)
        sum = sum + i;
    }
    return(sum==n);
}
int main() {
    int num;
    printf("enter the number: ");
    scanf("%d",num);
    if(perfect(num))
    printf("%d is a perfect number \n",num);
    else
    printf("%d is not perfact number \n", num);
    return 0;
}