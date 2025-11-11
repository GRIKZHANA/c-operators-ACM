#include <stdio.h>

int main() {
    float price;
    int quantity;
    float total;

    scanf("%f %d", &price, &quantity);

    total = price * quantity;

    printf("%g", total);

    return 0;
}
