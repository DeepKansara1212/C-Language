#include <stdio.h>
#include <string.h>

struct Student
{
    int rollNo;         // 4 Bytes
    char name[50];      // 50 Bytes
    float marks;        // 4 Bytes
};

// [
//     {
//         rollno: 12;
//         name: "avbdv";
//         marks: 45.56
//     }, 
//     {
//         rollno: 13;
//         name: "avbdv";
//         marks: 45.56
//     },
//     {
//         rollno: 14;
//         name: "avbdv";
//         marks: 45.56
//     }
// ]

// printf("%s", students[2].name); // Accessing the name of the third student

int main()
{
    struct Student students[3]; // Array of structures

    // printf("%d", sizeof(Student)); // Size of the structure in bytes

    for(int i = 0; i < 3; i++) {
        printf("Enter details for Student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
    }

    return 0;
}