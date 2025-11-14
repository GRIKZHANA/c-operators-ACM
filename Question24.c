#include <stdio.h>

int main() {
    float kmph, mps;

    printf("Enter speed in km/h: ");
    scanf("%f", &kmph);

    mps = kmph * (1000.0 / 3600.0);  // or kmph * 0.27778

    printf("Speed in m/s: %.2f\n", mps);

    return 0;
}
