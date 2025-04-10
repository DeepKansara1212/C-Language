#include<stdio.h>
#include<string.h>

void toggleCase(str) {
    int i = 0;
    while(str[i] != '\0') {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Convert to lowercase
        } else if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase
        }
        i++;
    }
}

int main() {
    char str1[] = "Hello World!";
    char str2[] = "I am a C programmer.";

    int length = strlen(str1); // Returns the length of the string
    printf("Length of the string: %d\n", length);

    strcat(str1, str2); // Concatenates str2 to str1
    printf("Concatenated string: %s\n", str1);

    // strcpy(); // Copies str2 to str1

    // strcmp(str1, str2); // Compares str1 and str2

    strupr(str2); // Converts str1 to uppercase
    printf("Uppercase string: %s\n", str2);

    strlwr(str2);

    return 0;
} 