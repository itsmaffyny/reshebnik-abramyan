#include <stdio.h> 

int main(void)
{

   ///Дан номер месяца — целое число в диапазоне 1–12 (1 — январь, 2 февраль и т. д.). Определить количество дней в этом месяце для невисокосного года.
 int x= 0;
 printf("What is the mpths? \n");
scanf( "%d", &x);
switch (x)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
   printf("days: 31\n");
   break;
case 4:
case 6:
case 9:
case 11:
   printf("days: 30\n");
   break;
case 2:
   printf("dauys: 28\n");
   break;
default:
   printf("there is no such month as %d\n", x);
   break;
}
return  0;
}
