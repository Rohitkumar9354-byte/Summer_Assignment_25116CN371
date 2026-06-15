//Write a program to Find sum and average of array

#include<stdio.h>
int main() {
    int n, i, sum = 0;
    float avg;
    printf("Enter the size: ");
    scanf("%d", &n);
    int arr[100];
for(i=0; i<=n; i++) {
    scanf("%d", & arr[i]);
    sum = sum + i;
}
avg = (float)sum/n;
printf("sum=%d\n", sum);
printf("average = %.2f\n", avg);
return 0;

}