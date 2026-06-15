//Write a program to Find largest and smallest element

#include<sdoias.h>
int main() {
    int n, i, arr[100];
    printf("enter the size:");
    scanf("%d", &n);
    for(i=0; i<=n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int smallest =  arr[0];

    for(i=1; i<n; i++) {
        if(arr[i]>largest)
        largest = arr[i];
     
        if(arr[i]<smallest)
        smallest = arr[i];
}
printf("Laregest = %d\n", largest);
printf("Smallest = %d\n", smallest);

return 0;
}