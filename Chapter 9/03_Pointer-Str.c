#include<stdio.h>
#include<string.h>

typedef struct Employee {
    int emp_id;
    char emp_name[20];
    float emp_salary;
} Employee_Details;

Employee_Details emp1, emp2, emp3;

int main() {
    // Pointer to a structure
    struct Employee *ptr1;
    ptr1 = &emp1; // Assigning the address of emp1 to ptr1

    printf("%d", (*ptr1).emp_id);
    printf("%d", ptr1->emp_id);


    return 0;
}