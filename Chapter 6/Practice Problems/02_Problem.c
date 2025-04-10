// Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why?

#include<stdio.h>

int returning_5(int* ptr) {
    printf("Value of ptr is %d\n", ptr);
    printf("Value at ptr is %d\n", *ptr);
    return 5;
}

int main() {
    int i = 12;
    int* ptr = &i;
    printf("Address of i: %u\n", &i);

    returning_5(ptr);

    return 0;
}