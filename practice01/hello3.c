#include <stdio.h>

int main() {
int a = 3;
int b = 4;



printf("\n Задача 18");
int x = 1;
printf("%d", x+__INT_MAX__);

printf("\n Задача 19");
int n;
scanf("%d", &n);
for (int i = 1; i <11; i++)
{
    printf("%d", n*i);
}

printf("\n Задача 20");
int q, w, e;
scanf("%d %d %d", &q, &w, &e);
if (q+w==e) printf("da");
else printf("ne");


printf("\n Задача 22");
float o;
    scanf("%f", &o);
    printf("%.2fF\n", (float)(o * (9/5) + 32));
    printf("%.2fK", (float)(o + 273));

}