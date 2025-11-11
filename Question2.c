#include <stdio.h>

int main() {
    int hours, minutes, total;

    scanf("%d %d", &hours, &minutes);

    total = (hours * 60) + minutes;

    printf("%d", total);

    return 0;
}
