#include <stdio.h>

int main() {
    float cost_price, selling_price, result;

    printf("Enter cost price: ");
    scanf("%f", &cost_price);

    printf("Enter selling price: ");
    scanf("%f", &selling_price);

    result = selling_price - cost_price;

    if(result > 0)
        printf("Profit: %.2f\n", result);
    else if(result < 0)
        printf("Loss: %.2f\n", -result);
    else
        printf("No profit, no loss.\n");

    return 0;
}
