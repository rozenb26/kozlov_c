#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    for (int num = 1; num <= N; num++) {
        int copy = num;
        int rev = 0;
        int sum = 0;
        
        while (copy != 0) {
            int digit = copy % 10;
            rev = rev * 10 + digit;
            sum += digit;
            copy /= 10;
        }
        
        if (rev == num && num % sum == 0) {
            printf("%d\n", num);
        }
    }
    
    return 0;
}