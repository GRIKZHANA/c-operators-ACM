#include <stdio.h>

int main() {
    int day;
    printf("Enter the day number (1-7): ");
    scanf("%d", &day);

    if (day == 6 || day == 7) {
        printf("It is a weekend day.\n");
    } else {
        printf("It is not a weekend day.\n");
    }

    return 0;
}
