#include<stdio.h>

int main() {
    int arr[3] = {1, 2, 3};
    int* ptr0 = arr; // Pointer to the first element of the array
    int* ptr1 = &arr[1]; // Pointer to the second element of the array
    int* ptr2 = &arr[2]; // Pointer to the third element of the array

    printf("Address of first element: %u\n", &arr[0]); 
    printf("Address of second element: %u\n", &arr[1]);
    printf("Address of third element: %u\n", &arr[2]);
    return 0;
}