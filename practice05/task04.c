#include <stdio.h>
int main(void) {
    char str[] = "hEllo wOrld";
    
    printf("Исходная строка: %s\n", str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        char lower = tolower(str[i]);  
        switch (lower) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'y':
                str[i] = '*';
                break;
        }
    }
    
    printf("%s\n", str);

    return 0;
}