// 5! = 5*4*3*2*1 = 120
// 6! = 6*5*4*3*2*1 = 720
    // = 6*5!

// 0! = 1
// 1! = 1

#include<stdio.h>

int main() {
    int num = 7;
    int fact = 1;
    // printf("Enter a number: ");
    // scanf("%d", &num);

    if(num < 0) {
        printf("Factorial of negative number is not possible\n");
    }
    else if(num == 0) {
        printf("Factorial of 0 is 1\n");
    }
    else {
        for(int i = 1; i <= num; i++) {
            fact = fact * i;
        }
        printf("Factorial of %d is %d\n", num, fact);
    }

    return 0;
}