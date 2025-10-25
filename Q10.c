#include <stdio.h>

int main() {
    int temperature = 35;

    if (temperature < 20 || temperature > 30) {
        printf("The temperature %d°C is outside the comfortable range.\n", temperature);
    } else {
        printf("The temperature %d°C is within the comfortable range.\n", temperature);
    }

    return 0;
}
