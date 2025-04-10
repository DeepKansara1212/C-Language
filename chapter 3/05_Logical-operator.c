#include <stdio.h>

// Logical operators
// &&, ||, !
// 0 - False
// 1 - True

// num > 5
// num > 10

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 5 && num > 10)
    {
        printf("Number is greater than 5 and 10\n");
    }
    else
    {
        printf("Number is not greater than 5 and 10\n");
    }

    return 0;
}
