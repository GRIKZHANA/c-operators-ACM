#include <stdio.h>

int main() {
    float distance, fuel, efficiency;

    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    printf("Enter fuel consumed (in liters): ");
    scanf("%f", &fuel);

    efficiency = distance / fuel;

    printf("Fuel efficiency: %.2f km/l\n", efficiency);

    return 0;
}
