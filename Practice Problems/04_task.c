#include<stdio.h>

int main() {
    int income, tax = 0;

    printf("Enter your income: ");
    scanf("%d", &income);

    if(income < 250000) {
        printf("No tax\n");
    }
    else if(income > 250000 && income < 500000) {
        tax = 0.05 * (income-250000);
        printf("Tax: %d\n", tax);
    }
    else if(income > 500000 && income < 1000000) {
        tax = 0.2 * (income-500000) + 0.05 * 250000;
        printf("Tax: %d\n", tax);
    }
    else {
        tax = 0.3 * (income - 1000000) + 0.2 * 500000 + 0.05 * 250000;
        printf("Tax: %d\n", tax);
    }

    return 0;
} 