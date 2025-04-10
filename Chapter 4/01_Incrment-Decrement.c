// INCREMENT DECREMENT OPERATORS
// ++, --
    // ++a, a++, --a, a--

// ++a: Pre-increment => First increment the value of a and then use it - ++ a
// a++: Post-increment => First use the value of a and then increment it - a ++

#include<stdio.h>

int main(){
    int a = 10;
    int b = a++;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}