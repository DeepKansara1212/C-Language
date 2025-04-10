// Write a program to print the values between 10 to 20. And the initial value of i should be 0. Use while loop.

#include<stdio.h>

int main() {
    int i = 0;

    while (i <= 20)
    {
        if(i>10){
            printf("The value of i is %d\n", i);
        }
        i++;
    }
    
    return 0;
}