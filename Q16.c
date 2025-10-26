#include <stdio.h>

int main() {
    int capacity = 800;   // Maximum capacity in kg
    int currentLoad = 850; // Current load in kg

    if (currentLoad > capacity) {
        printf("Elevator is overloaded.\n");
    } else {
        printf("Elevator is within safe limit.\n");
    }

    return 0;
}
