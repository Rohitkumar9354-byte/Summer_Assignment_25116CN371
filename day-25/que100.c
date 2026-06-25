//Write a program to Sort words by length.

 #include<stdio.h>
#include<string.h>
int main() {
    char words[5][50], temp[50];
    int i, j;
    printf("Enter 5 names:\n");
for(i=0; i<5; i++)
    gets(words[i]);
for(i=0; i<4; i++){
for(j=i+1; j<5; j++) {
    if(strcmp(words[i], words[j])>0) {
        strcpy(temp, words[i]);
        strcpy(words[i], words[j]);
        strcpy(words[j], temp);
        }
    }
}
printf("words sorted by Length: \n");
for(i=0; i<5; i++)
printf("%s\n", words[i]);
return 0;
}