#include<stdio.h>

int main() {
    int a = 10;
    int *p = &a;
    int **q = &p;    // q is a pointer to pointer which holds the address of p

    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *p);   
    printf("The value of a is %d\n", **q);  

    return 0;
}
