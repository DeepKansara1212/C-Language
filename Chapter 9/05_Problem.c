#include<stdio.h>
#include<string.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    struct Student students[5];

    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++) {
            if(students[i].marks < students[j].marks) {
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    return 0;
}

// 45 58 98 12 74
// 0  1   2  3  4

    // 1st Iteration
// 58 45 98 12 74
// 58 98 45 12 74
// 58 98 45 74 12


    // 2nd Iteration
// 98 58 45 74 12
// 98 58 74 45 12


    // 3rd Iteration
// 98 74 58 45 12


