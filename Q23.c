#include <stdio.h>

int main() {
    float budget, spent;

    printf("Enter your budget: ");
    scanf("%f", &budget);

    printf("Enter amount spent: ");
    scanf("%f", &spent);

    if (spent > budget) {
        printf("You exceeded your budget.\n");
    } else {
        printf("You are within your budget.\n");
    }

    return 0;
}
