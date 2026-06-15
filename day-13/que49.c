//Write a program to Input and display array

#include<stdio.h>
int main() {
int n, i, arr[100];
printf("Enter the size of array: ");
scanf("%d", &n);
printf("Enter the elment : \n");
for(i=0; i<=n; i++) {
scanf("%d",&arr[i]);
}
printf("Enter the array elements: \n");
for(i=0; i<=n; i++) {
    scanf("%d", & arr[i]);
}
return 0;
}