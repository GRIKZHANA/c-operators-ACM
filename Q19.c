#include <stdio.h>

int main() {
    int minCoin = 25;   // 25 cents
    int maxCoin = 200;  // 200 cents ($2)
    int insertedCoin = 15; // Inserted 15 cents

    if (insertedCoin >= minCoin && insertedCoin <= maxCoin) {
        printf("Coin is acceptable.\n");
    } else {
        printf("Coin is not acceptable.\n");
    }

    return 0;
}
