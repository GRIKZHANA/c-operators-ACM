#include <stdio.h>

int main() {
    float purchaseAmount = 120.0;

    if (purchaseAmount > 100) {
        printf("Discount applies.\n");
    } else {
        printf("No discount.\n");
    }

    return 0;
}
