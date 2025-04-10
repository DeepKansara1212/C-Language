#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int* ptr = &arr[0];
    printf("First element: %d", *ptr);

    return 0;
}   