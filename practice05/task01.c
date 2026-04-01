#include <stdio.h>

int main(void) {
    char str[] = "hEllo wOrld";
    int len = sizeof(str) / sizeof(str[0]);
    for (int i = len - 1; i >= 0; i--) {
    printf("%c", str[i]);
    }
}