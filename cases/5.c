#include <stdio.h> 

int main(void)
{
   /* Case6. Единицы длины пронумерованы следующим образом: 1 — дециметр, 2 — километр, 3 — метр, 4 — миллиметр, 5 — сантиметр. 
   Дан номер единицы длины (целое число в диапазоне 1–5) и длина отрезка в этих единицах (вещественное число). Найти длину отрезка в метрах..*/
int op;
double x;
printf("What operator do u want? \n");
scanf( "%d", &op);
printf("What nums do u want? \n");
scanf( "%lf", &x);
printf("in m: ");
switch (op)
{
case 1:
  printf("dm %.2lf", x/10);
   break;
case 2:
  printf("km %.2lf", x*1000);
   break;
case 3:
  printf("m %.2lf", x);
   break;
case 4:
  printf("%.2lf", x*100);
   break;
case 5:
  printf("%.2lf", x*10);
   break;

default:
   printf("there is no such operator as %d\n", op);
   break;
}
return  0;
}
