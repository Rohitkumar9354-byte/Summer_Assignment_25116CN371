//Write a program to Move zeroes to end

#include <stdio.h>
int main() {
    int n, i, j = 0, arr[100];
    printf("Enter size: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
        arr[j++] = arr[i];
        }
    }
    while(j < n) {
    arr[j++] = 0;
    }
    printf("Array after moving zeroes:\n");
    for(i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }
    return 0;
}