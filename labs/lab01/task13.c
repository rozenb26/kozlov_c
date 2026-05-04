#include <stdio.h>

int main() {
int seconds;
scanf("%d", &seconds);
printf("%d:%d:%d\n", seconds/3600, (seconds%3600)/60, seconds%60);
}
