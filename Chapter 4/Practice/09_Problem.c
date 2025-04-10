//  Print Fibonacci series up to N terms (e.g., 0, 1, 1, 2, 3, 5, 8...). 


// Fibonacci series:  0 1 1 2 3 5 8 13 21


#include<stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("fibonacci series: %d %d", first, second);

    for(int i = 3; i <= n; i++) {
        next = first + second;
        printf(" %d", next);
        first = second;
        second = next;
    }

    return 0;
}

