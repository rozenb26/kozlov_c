#include <stdio.h>

int main() {
int a, b, c;
printf("a: %p\n", (void*)&a);
printf("b: %p\n", (void*)&b);
printf("c: %p\n", (void*)&c);
printf("Разница между a и b: %d байт\n", (int)&b - (int)&a);
printf("Разница между b и c: %d байт\n", (int)&c - (int)&b);

//Почему так? Переменные расположены в стеке последовательно, но могут быть небольшие промежутки для выравнивания.
}