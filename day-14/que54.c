//Write a program to Frequency of an element.
#include<stdint.h>
int main() {
    int n, i, key, count=0, arr[100];
    prinf("Enter the size:");
    scanf("%d",&n);
    for(i=0; i<=n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter element: ");
    scanf("%d",&key);
    for(i=0; i<n; i++) {
        if(arr[i]==key)
        count++;
    }
    printf("Frequency=%d", count);
    return 0;
}