#include <stdio.h>

int main() {
    float o;
    scanf("%f", &o);
    printf("%.2fF\n", (float)(o * (9/5) + 32));
    printf("%.2fK", (float)(o + 273));
}