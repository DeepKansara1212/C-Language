#include<stdio.h>

void slice(char *str, int m, int n) {
    int i = 0, j = 0;

    if((m < 0) || (n > strlen(str)) || (m < n)) {
        printf("Invalid!");
    }

    for(int i = m; i < n; i++) {
        str[j++] = str[i];
    }
    str[j] = '\0';

}

int main() {
    
    char str[100] = "helloworld";
    int m = 2, n = 5;

    slice(str, m, n);

    return 0;
}


// h e l l o w o r l d
// 0 1 2 3 4 5 6 7 8 9