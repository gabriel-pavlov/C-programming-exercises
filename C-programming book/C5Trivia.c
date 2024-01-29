#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int giResponse = 0;

int main() {

    do { 
        system("clear");
        printf("\n\tTHE TRIVIA GAME\n\n");
        printf("1\tSports\n");
        printf("2\tGeography\n");
        printf("3\tQuit\n");
        printf("\n\nEnter your selection: ");
        scanf("%d", &giResponse);

        switch (giResponse)
        {
        case 1:
            if (sportsQuestion() == 4)
            printf("\nCorrect!\n");
            else 
            printf("\nIncorrect!\n");
            pause(2);
            break;
        case 2:
            if (geaographyQuestion() == 2)
            printf("\nCorrect!\n");
            else 
            printf("\nIncorrect!\n");
            pause(2);
            break;
        }
    } while (giResponse != 3);
    return 0;

}

int sportsQuestion(void){

    int iAnswer = 0;
    system("clear");
    printf("\tSports Question\n");
    printf("\nWhat University did NFL star Deion Sanders attend? ");
    printf("\n\n1\tUniversity of Miami\n");
    printf("2\tCalifornia State Univeristy\n");
    printf("3\tIndiana University\n");
    printf("4\tFlorida State University\n");
    scanf("%d", &iAnswer);
    return iAnswer;

}

int geographyQuestion(void){

    int iAnswer = 0;
    system("clear");
    printf("\tGeography Question\n");
    printf("\nWhat is the state capital of florida? ");
    printf("\n\n1\tpensacola\n");
    printf("2\tTallahassee\n");
    printf("3\tJacksonville\n");
    printf("4\tMiami\n");
    scanf("%d", &iAnswer);
    return iAnswer;

}

void pause(int inNum) {
    int iCurrentTime = 0;
    int iElapsedTime = 0;
    iCurrentTime = time(NULL);
    do {
        iElapsedTime = time(NULL);
    } while ( (iElapsedTime - iCurrentTime) < inNum);
}