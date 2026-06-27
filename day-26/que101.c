//Write a program to Create number guessing game

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int number, guess;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("Guess a number between 1 and 100\n");
    do{
        printf("Enter your guass:");
        scanf("%d", &guess);
        if(guess>number)
        printf("Too high!\n");
        else if(guess<number)
        printf("Too Low!\n");
        else
        printf("Congratulation! you guessed the correct number\n");
    }
    while(guess != number);
    return  0;
}