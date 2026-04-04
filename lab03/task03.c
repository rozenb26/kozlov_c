#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    int max = arr[0], min = arr[0], sum = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
        sum += arr[i];
    }
    printf("%d %d %d\n", max, min, sum);
    free(arr);
}