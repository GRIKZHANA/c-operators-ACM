#include <stdio.h>

int main() {
    float kg, grams, pounds, ounces;

    printf("Enter weight in kilograms: ");
    scanf("%f", &kg);

    grams = kg * 1000;
    pounds = kg * 2.20462;
    ounces = kg * 35.274;

    printf("Weight in grams: %.2f\n", grams);
    printf("Weight in pounds: %.2f\n", pounds);
    printf("Weight in ounces: %.2f\n", ounces);

    return 0;
}
