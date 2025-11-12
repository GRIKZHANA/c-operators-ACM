#include <stdio.h>

int main() {
    float km, meters, centimeters, millimeters;

    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    meters = km * 1000;
    centimeters = km * 100000;
    millimeters = km * 1000000;

    printf("Distance in meters: %.2f\n", meters);
    printf("Distance in centimeters: %.2f\n", centimeters);
    printf("Distance in millimeters: %.2f\n", millimeters);

    return 0;
}
