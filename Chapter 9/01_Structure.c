#include <stdio.h>
#include <string.h>

// struct Date
//     {
//         int day, month, year;
//     }

struct Employees
{
    int emp_id;
    char emp_name[20];
    float emp_salary;
    struct Date
    {
        int day, month, year;
    } joining_Date;

    // struct Date joining_Date;
};

int main()
{
    struct Employees emp1, emp2;
    // struct Employees
    // {
    //     int emp_id;
    //     char emp_name[20];
    //     float emp_salary;
    // } emp1, emp2, emp3;

    emp1.emp_id = 101;
    // emp1.emp_name = "John";
    strcpy(emp1.emp_name, "John");
    emp1.emp_salary = 50000.50;
    emp1.joining_Date.day = 15;
    emp1.joining_Date.month = 8;
    emp1.joining_Date.year = 2020;

    emp2.emp_id = 102;
    strcpy(emp1.emp_name, "John");
    emp2.emp_salary = 50000.50;

    printf("ID: %d\n", emp1.emp_id);
    printf("Name: %s\n", emp1.emp_name);
    printf("Salary: %.2f\n", emp1.emp_salary);
    return 0;
}