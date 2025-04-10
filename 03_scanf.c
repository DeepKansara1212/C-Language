// Addition of two numbers using scanf function

#include<stdio.h>

int main() {
    int num1;
    int num2; 
    int num3;

    // int sum = num1 + num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    printf("The sum of %d and %d is %d\n", num1, num2, (num1 + num2));  

    printf("The multiplication of %d, %d and %d is %d", num1, num2, num3, (num1 * num2 * num3));

    return 0;
} 