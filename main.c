#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("Hello! I have an integer 0-100 for you to guess! Good luck! \n");

    // srand does not return anything
    // It basically just init's rand function
    srand(time(0));
    int input;
    int guesses=1;
    int randInt= rand() % 101;

    // analogy: store info inside the house located on address of input
    scanf("%d",&input);
    while(input != randInt){
        if(input < 0 || input > 100){
            printf("You suck at reading instructions, the number is 0-100. I will give you a freebie, try again!\n");
        }
        else if (input > randInt){
            printf("Too high! Try again!\n");
            guesses++;
        }
        else if(input < randInt){
            printf("Too low! Try again!\n");
            guesses++;
        }

    scanf("%d",&input);
    }
    printf("Congrats! You got it within %d guesses!\n", guesses);
    return 0;
}