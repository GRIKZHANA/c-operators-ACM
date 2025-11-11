#include <stdio.h>

int main() {
    float inr, usd, eur;

    printf("Enter amount in INR: ");
    scanf("%f", &inr);

    usd = inr * 0.012;
    eur = inr * 0.011;

    printf("Amount in USD: %.2f\n", usd);
    printf("Amount in EUR: %.2f\n", eur);

    return 0;
}
