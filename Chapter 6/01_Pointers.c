#include<stdio.h>

int main() {
    int i = 10;
    int* j = &i;     // j is pointer which holds the address of i

    printf("The address of i is %p\n", j);
    printf("The address of i is %u\n", &i);

    return 0;
}

// Pointer is a variable which contains the address of the another variable