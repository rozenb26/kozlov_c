#include <stdio.h>

int main(void) {
    char str[] = "hEllo wOrld";
    int len = sizeof(str) / sizeof(str[0]);
    printf("%d", len);
    }
