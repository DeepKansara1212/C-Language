// Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main(). 

#include<stdio.h>

int sum(int* a, int* b) {
    return *a + *b;
}

float average(int* a, int* b) {
    return (*a + *b)/2.0;
}

int main() {
    int x = 4;
    int y = 6;

    printf("The sum is %d & average is %.2f", sum(&x, &y), average(&x, &y));

    return 0;
}