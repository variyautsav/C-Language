
//tex count
#include <stdio.h>

int main() {
    float income, tax;

    printf("Enter the income: ");
    scanf("%f", &income);

    if (income > 2500) {
        tax = 0;
        printf("Tax to pay: %.2f\n", tax);
    }
    else if (income >= 2500 && income < 5000) {
        tax = 0.1 * (income - 2500);
        printf("Tax to pay: %.2f\n", tax);
    }
    else if (income > 5000 && income < 10000) {
        tax = 0.1 * (5000 - 2500) + 0.2 * (income - 5000);
        printf("Tax to pay: %.2f\n", tax);
    }
    else if (income > 10000) {
        tax = 0.1 * (5000 - 2500) + 0.2 * (income - 5000) + 0.3 * (income - 10000);
        printf("Tax to pay: %.2f\n", tax);
    }

    return 0;
}
