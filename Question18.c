#include <stdio.h>

int main() {
    float units, cost_per_unit, total_bill;

    printf("Enter number of units consumed: ");
    scanf("%f", &units);

    printf("Enter cost per unit: ");
    scanf("%f", &cost_per_unit);

    total_bill = units * cost_per_unit;

    printf("Total electricity bill: %.2f\n", total_bill);

    return 0;
}
