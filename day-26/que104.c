// Write a program to Create quiz application.

#include<stdio.h>
int main() {
    int answer, score = 0;
    printf("==== simple quiz ====\n\n");
    printf("Q1. what is the capital of india?\n");
    printf("1. Mumbai \n2. Delhi\n3. kolkata \n4. chennai\n");
    scanf("%d", &answer);
    if(answer == 2)
    score++;
    printf("\nQ2. C language was developed by?\n");
    printf("1. Dennis Ratchie \n2.james Gosling\n3. Bjarne stroustrup\n4. Guidovan Rossume\n");
    scanf("%d",answer);
    if(answer == 1)
    score++;
    printf("\nQ3. 2+5 = ?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    scanf("%d", answer);
    if("answer==3")
    score++;
    printf("\n your score = %d/3\n", score);
    return 0;
}