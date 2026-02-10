#include <stdio.h> 

int main(void)
{
   /* For4. 
   Дано вещественное число — цена 1 кг конфет. 
   Вывести стоимость 1, 2, …, 10 кг конфет.*/

float k;
printf("cost of sweets\n");
scanf( "%f", &k);
printf("-------\n");

float b;
for (b = 1; b<=10; ++b){
   float price = k*b;
   printf("%.2f \n", price);
} 
return  0;
}
