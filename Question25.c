#include <stdio.h>

int main() {
    float weight, water_intake;

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    water_intake = weight * 0.033;

    printf("Recommended daily water intake: %.2f liters\n", water_intake);

    return 0;
}
