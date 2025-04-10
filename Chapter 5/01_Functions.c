#include<stdio.h>

// Function Prototype
float sum_of_numbers(int, int);

// Function Declaration
float sum_of_numbers(int a, int b) {
    printf("Sum of %d and %d is %d\n", a, b, a + b);
    return a + b;
}

// Syntax
/*
return_type function_name(parameter1, parameter2, ...) {
    // Function Body
}
*/

void function_name() {
    printf("Hello World\n");
}

int main() {
    int a = 10;
    int b = 20;
    sum_of_numbers(a, b);     // Function Call
    // printf("Sum of %d and %d is %d\n", a, b, sum);

    int a1 = 14;
    int b1 = 54;
    int sum1 = sum_of_numbers(a1, b1); 
    printf("Sum of %d and %d is %d\n", a1, b1, sum1);

    int a2 = 100;
    int b2 = 200;
    int sum2 = sum_of_numbers(a2, b2); 
    printf("Sum of %d and %d is %d\n", a2, b2, sum2);

    int sum3 = sum_of_numbers(10, 7);
    printf("Sum of %d and %d is %d\n", 10, 7, sum3);

    return 0;
}