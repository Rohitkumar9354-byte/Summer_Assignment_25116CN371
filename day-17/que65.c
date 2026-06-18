//Write a program to Merge arrays

#include<stdio.h>
int main() {
    int a[50], b[50], c[50];
    int n1, n2, i;
    printf("Enter the size of the first array:");
    scanf("%d",&n1);
    printf("Enter the size of the second  array:");
    scanf("%d",&n2);

    printf("Enter element of second array:");
    for(i=0; i<n2; i++) 
    scanf("%d", &b[i]);
    for(i=0; i<n1; i++) 
    c[i] = a[i];
    for(i=0; i<n2; i++) 
    c[n1+i]=b[i];
    printf("maeged array:");
    for(i=0; i<n1 + n2; i++) 
    printf("%d", c[i]);
    return 0;
}