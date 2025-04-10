#include<stdio.h>

int addition(int, int);



int main() {
    addition(5, 6);

    return 0;
}


int addition(int a, int b) {
    printf("The sum of %d and %d is %d\n", a, b, a + b);
    return a + b;
}