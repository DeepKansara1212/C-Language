#include<stdio.h>

int factorial(int);

int factorial(int n) {
    if((n == 0) || (n == 1)) {
        return 1;
    }
    else {
        n * factorial(n-1);
    }
}

int main() {
    
    int result = factorial(5);
    printf("Result: %d", result);
    return 0;
}