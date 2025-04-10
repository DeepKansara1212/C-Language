#include<stdio.h>

int main() {
    int age = 72;
    if(age >= 18){
        if(age >= 60) {
            printf("You are not eligible to drive\n");
        }
        else {
            printf("You are eligible to drive\n");
        }
    } 
    else {
        printf("You are not eligible to drive because you are a teenager\n");
    }
    return 0;
}