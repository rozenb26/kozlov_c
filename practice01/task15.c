#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    if (x>0) printf("\n%d",x^2);
    else if (x==0) printf("\n0");
    else printf("\n%d", -x);
}