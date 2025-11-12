#include <stdio.h>

int main() {
    int days, weeks, remaining_days, total_hours;

    printf("Enter total number of days: ");
    scanf("%d", &days);

    weeks = days / 7;
    remaining_days = days % 7;
    total_hours = days * 24;

    printf("Weeks: %d\n", weeks);
    printf("Remaining Days: %d\n", remaining_days);
    printf("Total Hours: %d\n", total_hours);

    return 0;
}
