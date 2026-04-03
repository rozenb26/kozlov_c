#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, idx, i;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &idx);
    for(i = idx; i < n-1; i++) arr[i] = arr[i+1];
    arr = (int*)realloc(arr, (n-1) * sizeof(int));
    for(i = 0; i < n-1; i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr);
}