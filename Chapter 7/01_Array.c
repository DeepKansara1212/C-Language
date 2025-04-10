#include<stdio.h>

int main() {
    // int num = 2;
    int numbers[5] = {1, 2, 3, 4, 5};
    float numbers2[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    char letters[5] = {'a', 'b', 'c', 'd', 'e'};

    // int numbers[5] = {1, 2, 3};

    // int numbers[] = {1, 2, 3, 4};

    //           0   1   2   3   4
    int num[] = {10, 15, 20, 78, 25};
    // printf("First element: %d\n", num[0]); 
    // printf("First element: %d\n", num[1]); 
    // printf("First element: %d\n", num[2]); 
    // printf("First element: %d\n", num[3]); 
    // printf("First element: %d\n", num[4]); 

    for(int index = 0; index < 5; index++) {
        printf("Element %d: %d\n", index, num[index]);
    }

    num[3] = 100;
    printf("First element: %d\n", num[3]);

    return 0;
}