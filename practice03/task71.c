#include <stdio.h>

int main() {
int N;
scanf("%d", &N);
for (int i = 1; i < (N+1); i++) {
    int temp = i;
    int sum = 0;
    int count = 0;
    int temp2 = i;
    while (temp2 > 0) {
        count++;
        temp2 /=10;

    }
    temp = i;
    while (temp > 0) {
            int digit = temp % 10;
            int pow = 1;
            for (int j = 0; j < count; j++) {
                pow *= digit;
            }
            
            sum += pow;
            temp /= 10;
    }
}   
}
