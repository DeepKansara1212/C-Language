#include<stdio.h>

int main() {
    char str[100] = "Hello World!";

    int i = 0, wordCount = 1;

    while(str[i] != '\0') {
        if(str[i] == ' ') {
            wordCount++;
        }
    }

    return 0;
}