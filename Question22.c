#include <stdio.h>

int main() {
    float length, width, height, volume, surface_area;

    printf("Enter length of the cuboid: ");
    scanf("%f", &length);

    printf("Enter width of the cuboid: ");
    scanf("%f", &width);

    printf("Enter height of the cuboid: ");
    scanf("%f", &height);

    volume = length * width * height;
    surface_area = 2 * (length * width + width * height + height * length);

    printf("Volume of Cuboid: %.2f\n", volume);
    printf("Surface Area of Cuboid: %.2f\n", surface_area);

    return 0;
}
