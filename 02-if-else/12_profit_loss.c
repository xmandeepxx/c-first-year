#include <stdio.h>

int main() {
    float cost_price, selling_price, amount;

    // Input Cost Price
    printf("Enter Cost Price: ");
    if (scanf("%f", &cost_price) != 1) {
        printf("Invalid input for Cost Price.\n");
        return 1;
    }

    // Input Selling Price
    printf("Enter Selling Price: ");
    if (scanf("%f", &selling_price) != 1) {
        printf("Invalid input for Selling Price.\n");
        return 1;
    }

    // Profit / Loss Logic
    if (selling_price > cost_price) {
        amount = selling_price - cost_price;
        printf("You made a Profit of %.2f\n", amount);
    } 
    else if (selling_price < cost_price) {
        amount = cost_price - selling_price;
        printf("You made a Loss of %.2f\n", amount);
    } 
    else {
        printf("No Profit No Loss.\n");
    }

    return 0;
}
