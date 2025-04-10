#include<stdio.h>

int main() {
    int x=2, y=3, z=3, k=1;

    float result = x + y * z / k;

    // x + 9 / k
    // x + 9
    // 11
    printf("The result is: %.2f\n", result);

    return 0;
}