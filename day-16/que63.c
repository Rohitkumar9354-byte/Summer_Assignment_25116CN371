// Write a program to Find pair with given sum

#include <stdio.h>
int main() {
    int n, i, j, target,arr[100];
    printf("Enter size: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    }
    printf("Enter target sum: ");
    scanf("%d", &target);
    for(i = 0; i < n; i++) {
    for(j = i + 1; j < n; j++) {
    if(arr[i] + arr[j] == target) {
    printf("Pair: %d %d", arr[i], arr[j]);
            }
        }
    }
    return 0;
}