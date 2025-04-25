#include <stdio.h>

int main() {
    //           0   1   2   3   4   5   6   7   8    9  
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int* ptr = &arr[0];
    printf("First element: %d", *ptr);

    ptr + 5;

    return 0;
}   