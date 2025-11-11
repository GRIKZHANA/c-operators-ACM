#include <stdio.h>

int main() {
    float a, b;

    scanf("%f %f", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: %g %g", a, b);

    return 0;
}
