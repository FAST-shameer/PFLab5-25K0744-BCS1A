#include <stdio.h>
#include <string.h>

int main() {
    char section[20];
    char size[10];
    char type[15];
    int quantity;
    float price = 0, total = 0;

    printf("Welcome to the Restaurant!\n");
    printf("Choose your section (Coffee / Burger / IceCream): ");
    scanf("%s", section);

    if (strcmp(section, "Burger") == 0) {
        printf("Your order will be handled by Burger Hub.\n");
    }
    else if (strcmp(section, "IceCream") == 0) {
        printf("Your order will be handled by Ice Cream Parlour.\n");
    }
    else if (strcmp(section, "Coffee") == 0) {
        printf("Choose coffee size (Small/Medium/Large): ");
        scanf("%s", size);

        if (strcmp(size, "Small") == 0){
            price = 2.0;
		} else if (strcmp(size, "Medium") == 0){
            price = 3.0;
		} else if (strcmp(size, "Large") == 0){
            price = 4.0;
		} else {
            printf("Invalid size!\n");
            return 0;
        }
        printf("How many coffees do you want? ");
        scanf("%d", &quantity);
        if (quantity > 1) {
            printf("Check our combo offers!\n");
        }
        total = price * quantity;
        if (quantity >= 3) {
            total *= 0.9;
        }
        printf("Choose coffee type (Regular/Cappuccino/Latte): ");
        scanf("%s", type);

        printf("\n----- BILL -----\n");
        printf("Coffee Size: %s\n", size);
        printf("Coffee Type: %s\n", type);
        printf("Quantity   : %d\n", quantity);
        printf("Total Bill : $%.2f\n", total);
        printf("----------------\n");
    }
    else {
        printf("Invalid Section!\n");
    }
    return 0;
}
