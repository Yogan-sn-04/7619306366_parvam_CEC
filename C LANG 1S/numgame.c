#include <stdio.h>

int main() {
    int number = 50; // Fixed number for simplicity
    int guess;
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have picked a number between 1 and 100. Can you guess it?\n");
    while (1) 
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < number) 
        {
            printf("Too low! Try again.\n");
        } else if (guess > number) 
        {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number!\n");
            break;
        }
    }

    return 0;
}