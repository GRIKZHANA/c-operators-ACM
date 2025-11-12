#include <stdio.h>

int main() {
    float mass_per_object, total_mass;
    int quantity;

    printf("Enter mass of one object: ");
    scanf("%f", &mass_per_object);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    total_mass = mass_per_object * quantity;

    printf("Total mass: %.2f\n", total_mass);

    return 0;
}
