#include <stdio.h>

int main() {
    float m1, m2, m3, average;

    printf("Enter marks of first subject: ");
    scanf("%f", &m1);

    printf("Enter marks of second subject: ");
    scanf("%f", &m2);

    printf("Enter marks of third subject: ");
    scanf("%f", &m3);

    average = (m1 + m2 + m3) / 3;

    printf("Average Marks: %.2f\n", average);

    return 0;
}
