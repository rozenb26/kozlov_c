#include <stdio.h>
int main () {
int z;

printf("\n Задача 11");
int q;
if (q%2==0) printf("da");
else printf("ne");


printf("\n Задача 12");
int w, e, r;
if (w>e && w > r) printf("w - max");
else if (e>w && e> r) printf("e - max");
else printf("r - max");


printf("Задача 13");
int t;
scanf("%d", &t);
if (t >=90) printf("Good");
else if (75<=t<=89) printf("norm");
else if (60<=t<=74) printf("neoch");
else printf("ti tupoy");





printf("\n Введите дни недели");
scanf("%d", &z);
switch(z) {
case 1:
printf("pn");
break;
case 2:
printf("wt");
break;
case 3:
printf("sr");
break;
case 4:
printf("ct");
break;
case 5:
printf("pt");
break;
case 6:
printf("sb");
break;
case 7:
printf("vs");
break;
}

printf("\n Задача 15");
int x;
scanf("%d", &x);
if (x>0) printf("\n%d",x^2);
else if (x==0) printf("\n0");
else printf("\n%d", -x);



}