#include <stdio.h>

int main() {
    int startHour = 9;   // 9 AM
    int endHour = 17;    // 5 PM
    int currentTime = 18; // 6 PM

    if (currentTime > endHour) {
        printf("It is after working hours.\n");
    } else if (currentTime < startHour) {
        printf("It is before working hours.\n");
    } else {
        printf("It is within working hours.\n");
    }
    return 0;
}