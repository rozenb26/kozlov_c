#include <stdio.h>

int main() {
int N;
int sum = 1;  
scanf("%d", &N);
for (int i = 1; i < N; i++ ) {
if (i%3==0) sum *= i;

}
}
