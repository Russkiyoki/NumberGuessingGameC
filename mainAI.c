#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    printf("Yo! I picked a number between 0 and 100. Try to guess it!\n");

    // Seed random number generator
    srand(time(0));
    int randInt = rand() % 101;  // 0–100
    int input;
    int guesses = 0;

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &input);
        guesses++;

        if (input < 0 || input > 100) {
            printf("Bro, the number is 0-100. Freebie, try again!\n");
        }
        else if (input > randInt) {
            printf("Too high! Try again!\n");
        }
        else if (input < randInt) {
            printf("Too low! Try again!\n");
        }
        else {  // correct
            if (guesses == 1) {
                printf("Congrats! You got it in 1 guess!\n");
            } else {
                printf("Congrats! You got it in %d guesses!\n", guesses);
            }
            break;
        }
    }

    return 0;
}
