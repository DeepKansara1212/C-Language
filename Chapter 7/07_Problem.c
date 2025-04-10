#include <stdio.h> 
 
int main() { 
    int arr[3][10]; // 3x10 array to store multiplication tables of 2, 7, and 9 
    int *ptr = &arr[0][0]; // Pointer to the first element of the array 
 
    // Store the multiplication tables of 2, 7, and 9 
    for (int i = 0; i < 10; i++) { 
        *(ptr + i) = 2 * (i + 1);    // First row: Multiplication table of 2 
        *(ptr + 10 + i) = 7 * (i + 1); // Second row: Multiplication table of 7 
        *(ptr + 20 + i) = 9 * (i + 1); // Third row: Multiplication table of 9 
    } 
 
    // Printing the multiplication tables 
    printf("Multiplication Tables of 2, 7, and 9:\n\n"); 
 
    // Printing the multiplication table of 2 
    printf("Multiplication Table of 2:\n"); 
    for (int i = 0; i < 10; i++) { 
        printf("2 x %d = %d\n", i + 1, *(ptr + i)); 
    } 
 
    printf("\n"); 
 
    // Printing the multiplication table of 7 
    printf("Multiplication Table of 7:\n"); 
    for (int i = 0; i < 10; i++) { 
        printf("7 x %d = %d\n", i + 1, *(ptr + 10 + i)); 
    } 
 
    printf("\n"); 
 
    // Printing the multiplication table of 9 
    printf("Multiplication Table of 9:\n"); 
    for (int i = 0; i < 10; i++) { 
        printf("9 x %d = %d\n", i + 1, *(ptr + 20 + i)); 
    } 
 
    return 0; 
}       