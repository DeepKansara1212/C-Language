// Instructions
    // Set Instrucion
    // Arithmetic Instruction
    // Logical Instruction
    // Data Transfer Instruction
    // Control Instruction


#include<stdio.h>

int main() {
    int a = 5;
    int b = 3;

    int c = 3, d = 4;

    int e = a + b;  // a,b are operands and + is operator
    int f = a - b;
    int g = a * b;
    int h = a / b;

    int i = a % b;

    printf("The output of a % b is %d\n", i);

    printf("1");

    printf("%d", 4/5);       // 0
    printf("%f", 4/5);       // 0.000000
    printf("%f", 4.0/5);     // 0.800000
    printf("%f", 4/5.0);     // 0.800000
    return 0;
}


// operators
    // 4*5/8+3-2 / 5 
    // 20/8+3-2 / 5
    // 2+3-2 / 5
    // 5-2 / 5
    // 3 / 5
    // 0

    // 1) Operator Precedence
        // 1. ()
        // 2. * / %
        // 3. + -

        // 4*8/7*3 
        // 32/7*3
        // 4*3
        // 12

    // 2) Associativity 
        // 1. Left to Right
        // 2. Right to Left-


// Type Conversion

    // int + int = int
    // float + int = float
    // float + float = float