#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int selection = 0;
    int iResp1 = 0;
    int iResp2 = 0;
    int iResp3 = 0;
    int iResp4 = 0;
    int iResp5 = 0;
    int iElapsedTime = 0;
    int iCurrentTime = 0;
    int iRandomNum = 0;
    int i1 = 0;
    int i2 = 0;
    int i3 = 0;
    int i4 = 0;
    int i5 = 0;
    int iCounter = 0;

    int totTime = 0;
    int totNumber = 0;

    srand(time(NULL));

    printf("\nSelect level\n");
    printf("1. Easy (3 numbers, 5 seconds)\n");
    printf("3. medium (5 numbers, 5 seconds)\n");
    printf("3. hard (5 numbers, 2 seconds)\n");
    printf("4. quit");

    scanf("%d", &selection);

    switch (selection)
    {

    case 1:
        totTime = 5;
        totNumber = 3;
        i1 = rand() % 100;
        i2 = rand() % 100;
        i3 = rand() % 100;
        break;
    case 2:
        totTime = 5;
        totNumber = 5;
        i1 = rand() % 100;
        i2 = rand() % 100;
        i3 = rand() % 100;
        i4 = rand() % 100;
        i5 = rand() % 100;
        break;
    case 3:
        totTime = 2;
        totNumber = 5;
        i1 = rand() % 100;
        i2 = rand() % 100;
        i3 = rand() % 100;
        i4 = rand() % 100;
        i5 = rand() % 100;
        break;
    case 4:
        printf("Goodbye\n");
        break;
    }

    switch (totNumber)
    {

    case 3:
        printf("please concentrate on the next three numbers\n");
        printf("\n%d\t%d\t%d\n", i1, i2, i3);
        break;
    case 5:
        printf("please concentrate on the next five numbers\n");
        printf("\n%d\t%d\t%d\t%d\t%d\n", i1, i2, i3, i4, i5);
        break;
    default:
  
        break;
    }

    iCurrentTime = time(NULL);
    do { 
        iElapsedTime = time(NULL);
    } while ( (iElapsedTime - iCurrentTime) < totTime);
    system("clear");
    printf("Enter each # seperated with one space: \n");
    if(totNumber == 3) {
        scanf("%d%d%d", &iResp1, &iResp2, &iResp3);
    } else if(totNumber == 5) {
        scanf("%d%d%d%d%d", &iResp1, &iResp2, &iResp3, &iResp4, &iResp5);
    } else {

    }

    if (i1 == iResp1 && i2 == iResp2 && i3 == iResp3 && i4 == iResp4 && i5 == iResp5) {
        printf("congratulations\n");
    } else {
        printf("Sorry, thats not correct.");
    }

}