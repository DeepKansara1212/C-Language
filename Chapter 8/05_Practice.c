#include<stdio.h>

int main() {
    char str[] = "Hello World!";

    int i, wordCount = 1;

    while(str[i] != '\0') {
        if(str[i] == ' ') {
            wordCount++;
        }
    }

    return 0;
}