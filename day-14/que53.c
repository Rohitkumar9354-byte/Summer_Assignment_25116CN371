//Write a program to Linear search
#include<stdio.h>
int main() {
    int n, i, key, found = 0, arr[100];
    printf("Enter the size:");
    scanf("%d", &n);
    for(i=0; i<=0; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for(i=0; i<=n; i++) {
        if(arr[i]==key) {
            printf("Enter the found at position %d", i+1);
            found=1;
            break;
        }
    }
    if(!found)
    printf("Element not found");
    return 0;
}

