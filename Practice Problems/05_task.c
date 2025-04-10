#include<stdio.h>

int main() {
    int employee_salary, years_of_service, bonus = 0;

    if(years_of_service > 10) {
        bonus = 0.1 * employee_salary;
        printf("Bonus: %d\n", bonus);
    }
    else if(years_of_service > 5) {
        bonus = 0.05 * employee_salary;
        printf("Bonus: %d\n", bonus);
    }
    else {
        bonus = 0.02 * employee_salary;
        printf("Bonus: %d\n", bonus);
    }
    return 0;
}