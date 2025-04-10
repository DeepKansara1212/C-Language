#include<stdio.h>
#include<string.h>

int main() {
    char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    printf("%s\n", str); // Print the string

    char str2[20] = "Hello"; // String literal
    printf("%s\n", str2); // Print the string

    char* str3 = "Hello World!"; // Pointer to string literal
    return 0;
}