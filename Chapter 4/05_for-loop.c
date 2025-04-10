/*
// Syntax:
for(variable_declaration; condition; increment/decrement)
{
    // code
}
*/ 

#include<stdio.h>

int main() {
    // int n;
    
    // printf("Enter the value of n: ");
    // scanf("%d", &n);
    int num = 5;
    for (int i = num ; i>0 ; i--)
    {
        printf("%d\n", i);
    }
    return 0;
} 
