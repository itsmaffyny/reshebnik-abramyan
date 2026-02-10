#include <stdio.h> 

int main(void)
{
   /*Case5. Арифметические действия над числами пронумерованы следующим образом: 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление.
    Дан номер действия N (целое число в диапазоне 1–4) и вещественные числа A и B (B не равно 0). Выполнить над числами указанное действие и вывести результат.*/
int op= 0;
double x, b;
printf("What operator do u want? \n");
scanf( "%d", &op);
printf("What nums do u want? \n");
scanf( "%lf", &x);
scanf( "%lf", &b);
switch (op)
{
case 1:
  printf("%.2lf", x+b);
   break;
case 2:
  printf("%.2lf", x-b);
   break;
case 3:
  printf("%.2lf", x*b);
   break;
case 4:
  printf("%.2lf", x/b);
   break;

default:
   printf("there is no such operator as %d\n", op);
   break;
}
return  0;
}
