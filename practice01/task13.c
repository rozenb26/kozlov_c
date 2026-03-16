#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    if (t >=90) printf("Good");
    else if (75<=t<=89) printf("norm");
    else if (60<=t<=74) printf("neoch");
    else printf("ti tupoy");
}