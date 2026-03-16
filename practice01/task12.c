#include <stdio.h>

int main() {
    int w, e, r;
    if (w>e && w > r) printf("w - max");
    else if (e>w && e> r) printf("e - max");
    else printf("r - max");
}