//Write a program to Find missing number in array
#include <stdio.h>
int main() {
int n, i, sum = 0, arr[100];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++) {
    scanf("%d", &arr[i]);
    sum = sum + arr[i];
    }
    int total = n * (n + 1) / 2;
    printf("Missing Number = %d", total - sum);
    return 0;
}