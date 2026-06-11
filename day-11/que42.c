//Write a program to Write function to find maximum

#include<stdio.h>
int findmax(int a, int b) {
    
    if(a>b)
    return a;
else
return b;
}
int main()  {
int num1, num2;
printf("Enter the two number: ");
scanf("%d %d",&num1, num2);
printf("maximum= %d", findmax(num1, num2));
return 0;
}