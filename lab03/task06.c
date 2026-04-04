#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, idx, val, i;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d %d", &idx, &val);
    arr = (int*)realloc(arr, (n+1) * sizeof(int));
    for(i = n; i > idx; i--) arr[i] = arr[i-1];
    arr[idx] = val;
    for(i = 0; i <= n; i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr);
}