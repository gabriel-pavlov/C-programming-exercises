#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>

int main() {

    srand(time(NULL));
    int random = rand() % 10 + 1;
    int guess;

    printf("Enter a number between 1 and 10 \n");
    scanf("%d", &guess);

    while (isdigit(guess) == false) {

        printf("Guess was invalid, please enter a number between 1 and 10 \n");
        scanf("%d", &guess);

    }

    if (guess == random) {
        printf("correct\n");
    } else {
        printf("incorrect\n");
    }


}