#include<stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= 10; i++) {
        int product = num * i;
        printf("%d x %d = %d\n", num, i, product);
        sum += product;
    }

    printf("Sum of the multiplication table of %d is %d\n", num, sum);

    return 0;
}