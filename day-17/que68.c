//Write a program to Find common elements.

#include<stdio.h>
int main() {
    int a[50], b[50];
    int n1, n2, i,j;
    printf("Enter the size of the first array:");
    scanf("%d",&n1);
    for(i=0; i<n1; i++) 
    scanf("%d",&a[i]);
    printf("Enter the size of the second  array:");
    scanf("%d",&n2);
    for(i=0; i<n2; i++) 
    scanf("%d",&b[i]);
printf("common element:");
for(i=0; i<n1; i++) {
    for(j=0; j<n2; j++) {
        if(a[i]==b[j]) {
            printf("%d",a[i]);
            break;
        }
    }
}
return 0;
