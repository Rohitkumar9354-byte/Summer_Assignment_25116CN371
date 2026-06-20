//Write a program to Binary search

#include<stdio.h>
int main() {
    int a[100], n, i, key;
    int low =0, high, mid, found=0;
    printf("enter the size:");
    scanf("%d", &n);
    printf("enter the sorted array: \n");
    for(i=0; i<n; i++) 
    scanf("%d", & a[i]);

    printf("enter the element to search:");
    scanf("%d", &key);
    high = n-1;
    while(low<=high) {
        mid = (low+high)/2;
        if(a[mid]==key) {
            found = 1;
            break;
        }
        else if(a[mid]<key)
        low = mid+1;
        else
        high = mid-1;
    }
    if(found) 
    printf("Element found at position %d", mid +1);
    else
    printf("Element not found");
    return 0;
}