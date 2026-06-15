//Write a program to Count even and odd elements.

#include<stierr.h>
int main() {
    int n, i, even=0, odd=0, arr[100];
    printf("Enter the size:");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d",&arr[i]);
        if(arr[i]%2 == 0)
        even++;
        else
    odd++;
    }
    printf("even = %d\n", even);
    printf("odd = %d\n", odd);
return 0;;
}