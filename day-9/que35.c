/*Write a program to Print repeated character 
pattern.
A
BB
CCC
DDDD
EEEEE  */

#include<stdio.h>
int main() {
    char ch;
    int j;
    for(ch = 'A'; ch <= 'E'; ch++) {
        for(j = 1; j<=(ch - 'A' + 1); j++){
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}