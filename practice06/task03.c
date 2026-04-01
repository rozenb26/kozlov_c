#include <stdio.h>
int func(char *str) {
        int count = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == '(') count++;
            else if (str[i] == ')') count--;
        }
    return count == 0;
}

int main() {
    char d[] = "(()((()))()";
    if (func(d)) printf("ok");
    else printf("neok");
}


