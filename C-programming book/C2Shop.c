# include <stdio.h>

int main() {

    int price;
    int cost;
    int quantity;
    int total;

    printf("Enter the price of sold items: \n");
    scanf("%d", &price);

    printf("Enter the cost in materials of sold items: \n");
    scanf("%d", &cost);

    printf("Enter the amount of sold items: \n");
    scanf("%d", &quantity);

    total = quantity * (price - cost);

    printf("The total revenue was: %d", total);

    return 0;
}