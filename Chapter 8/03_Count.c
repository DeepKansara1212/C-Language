#include<stdio.h>

int main() {
    char str1[] = "Hello World! 555";
    555 !dlrow olleH
    555 World! Hello

    int vowels = 0;
    int consonants = 0;
    int i = 0;

    while(str1[i] != '/0') {

        if((str1[i] == 'a') || (str1[i] == 'e') || (str1[i] == 'i') || (str1[i] == 'o') || (str1[i] == 'u')){
            vowels++;
        }
        
        else {
            consonants++;
        }
    }



    return 0;
}