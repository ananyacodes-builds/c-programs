#include <stdio.h>

int main() {
    int secret = 7;
    int guess;
    int attempts = 0;

    printf("Welcome to Number Guessing Game!\n");

    do {
        printf("Guess a number between 1 and 10: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secret) {
            printf("Too high! Try again.\n");
        }
        else if (guess < secret) {
            printf("Too low! Try again.\n");
        }
        else {
            printf("Correct! You won!\n");
            printf("Attempts: %d\n", attempts);
        }

    } while (guess != secret);

    return 0;
}