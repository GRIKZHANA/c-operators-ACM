#include <stdio.h>

int main() {
    int age;
    int days;
    int hours;

    scanf("%d", &age);

    // Approximate leap years: every 4th year is a leap year
    days = (age * 365) + (age / 4);

    hours = days * 24;

    printf("Days: %d\nHours: %d", days, hours);

    return 0;
}
