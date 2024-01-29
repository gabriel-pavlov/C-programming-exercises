#include <stdlib.h>

int main() {

    int target = 100;
    int start = 0;
    int increment = 1;

    printf("Enter a target number \n");
    scanf("%d", &target);

    printf("Enter a starting number \n");
    scanf("%d", &start);

    printf("Enter the increment number \n");
    scanf("%d", &increment);

    if (target > start) {
        for (int i = start; i < target; i += increment ) {
            printf("target number: %d\n", target);
            printf("starting number: %d\n", start);
            printf("current number: %d\n", i);
        }
    } else {
        for (int i = start; i > target; i -= increment ) {
            printf("target number: %d\n", target);
            printf("starting number: %d\n", start);
            printf("current number: %d\n", i);
        }
    }


}