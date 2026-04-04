#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;
    int n = 0, choice, val, idx, m, i;
    while(scanf("%d", &choice) == 1) {
        if(choice == 1) {      
            scanf("%d", &val);
            arr = (int*)realloc(arr, (n+1)*sizeof(int));
            arr[n++] = val;
        }
        else if(choice == 2) {    
            scanf("%d", &idx);
            if(idx >= 0 && idx < n) {
                for(i = idx; i < n-1; i++) arr[i] = arr[i+1];
                n--;
                arr = (int*)realloc(arr, n*sizeof(int));
            }
        }
        else if(choice == 3) {    
            for(i = 0; i < n; i++) printf("%d ", arr[i]);
            printf("\n");
        }
        else if(choice == 4) {  
            scanf("%d", &m);
            arr = (int*)realloc(arr, m*sizeof(int));
            if(m > n) {
                for(i = n; i < m; i++) arr[i] = 0;
            }
            n = m;
        }
        else if(choice == 0) break;
    }
    free(arr);
}