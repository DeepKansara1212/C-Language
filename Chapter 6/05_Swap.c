#include<stdio.h>

void swap(int*, int*);

void swap(int* a, int* b) {
    int* temp;
    *temp = *a;
    *a = *b;      
    *b = *temp;
    printf("a = %d, b = %d", a, b);
    return;
} 

int main() {
    int a = 10, b = 20;
    swap(&a, &b);

    return 0;
}