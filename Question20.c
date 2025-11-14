#include <stdio.h>

int main() {
    int feet, inches;
    float total_cm;

    printf("Enter height in feet: ");
    scanf("%d", &feet);

    printf("Enter height in inches: ");
    scanf("%d", &inches);

    total_cm = feet * 30.48 + inches * 2.54;

    printf("Height in centimeters: %.2f cm\n", total_cm);

    return 0;
}
