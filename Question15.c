#include <stdio.h>

int main() {
    float radius, circumference, area;
    const float pi = 3.14159;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    circumference = 2 * pi * radius;
    area = pi * radius * radius;

    printf("Circumference of Circle: %.2f\n", circumference);
    printf("Area of Circle: %.2f\n", area);

    return 0;
}
