#include<stdio.h>

int sum(int, int);

int sum(int a, int b) {
    a = 8;
    return a + b;
}

int main() {
    int x = 10, y = 5;
    printf("Sum: %d", sum(x, y));

    printf("Value of x: %d", x);

    return 0;
}