#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(0));

    int secret = rand() % 100 + 1;
    int guess;
    int attempts =0;

do {
    printf("Guess a number (1-100): ");
    scanf("%d", &guess);

    attempts++;

    if(guess < 1 || guess > 100) {
        printf("Invalid input! Please enter a number between 1 and 100.\n");
        continue;
    }

    if (guess > secret) {
        printf("Too High! Try again.\n");
    }
    else if (guess < secret) {
        printf("Too Low! Try again.\n");
    }
    else {
        printf("Correct Guess!\n");
        printf("Total attempts: %d\n", attempts);
    }

} while (guess != secret);

    return 0;
}