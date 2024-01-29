# include <stdio.h>

int main() {

    int a = 5;
    int b = 1;
    int x = 10;
    int y = 5;
    int f = 0;

    printf("Enter the value of a: \n");
    scanf("%d", &a);

    printf("Enter the value of b: \n");
    scanf("%d", &b);

    printf("Enter the value of x: \n");
    scanf("%d", &x);

    printf("Enter the value of y: \n");
    scanf("%d", &y);

    f = (a-b) * (x-y);

    printf("f = %d", f);


}