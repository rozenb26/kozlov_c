#include <stdio.h>
int main() {
    char arr[7] = {"sosal"};
    char *p = arr;
    int n = 6;
    for (int i = 0; i < n; i ++) {
        printf("%c ", p[i]);
    }

}