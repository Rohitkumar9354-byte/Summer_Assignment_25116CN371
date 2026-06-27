//Write a program to Create voting eligibility system

#include<stdio.h>
int mainn() {
    int age;
    printf("Enter the your agr:");
    scanf("%d", &age);
    if(age>=18) 
    printf("You are eligible to vote.");
    else
    printf("you are not eligible to vate.");
    return 0; 
}