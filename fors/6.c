#include <stdio.h> 

int main(void)
{
   /*
  For6. Дано вещественное число — цена 1 кг конфет. 
  Вывести стоимость 1.2, 1.4, …, 2 кг конфет.*/
float k;
printf("cost of sweets\n");
scanf( "%f", &k);
printf("-------\n");
float b;
for (b = 1.2; b<=2.1; b+=0.2){
   printf("%.2f \n", k*b);
} 
return  0;
}
