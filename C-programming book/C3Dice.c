#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <time.h>

int main() {

    srand(time(NULL));
    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;

    int total;

    total = dice1 + dice2;

    if (total == 7 || total == 11) {
        printf("Player wins\n");
    } else {
        printf("the total was: %d\n", total);
        printf("thank you for playing\n");
    }


}