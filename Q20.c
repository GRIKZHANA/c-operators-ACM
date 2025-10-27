#include <stdio.h>

int main() {
    int player1 = 35;
    int player2 = 40;
    int total = player1 + player2;

    if (total <= 80) {
        printf("Combined score does not exceed 80 points.\n");
    } else {
        printf("Combined score exceeds 80 points.\n");
    }

    return 0;
}
