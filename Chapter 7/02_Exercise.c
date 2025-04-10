#include<stdio.h>

int main() {
    int marks[5] = {12, 58, 45, 78, 90};    

    for (int i = 0; i < 5; i++)
    {
        printf("Marks of student %d: %d\n", i+1, marks[i]);
    }
    

    return 0;
}