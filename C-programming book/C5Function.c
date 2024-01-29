#include <stdio.h>

main() {



}

int modNumbers(int numb1, int numb2) {
    return numb1 % numb2;
}

int findGreater(int numb1, int numb2) {
    if( numb1 > numb2) {
        return 1;
    } else if( numb1 < numb2) {
        return 2;
    } else {
        return 3;
    }
}

void ATMmenu() {

    printf("ATM bank and money transfer\n");
    printf("press 1 to withdraw money from your card\n");
    printf("press 2 to put money onto your balance\n");
    printf("press 3 to send money to another account\n");

}