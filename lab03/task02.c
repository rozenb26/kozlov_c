#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    int *arr = (int*)calloc(n, sizeof(int));
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr);
}