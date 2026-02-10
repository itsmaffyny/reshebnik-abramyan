#include <stdio.h> 

int main(void)
{
   /*
   For5. Дано вещественное число — цена 1 кг конфет. 
   Вывести стоимость 0.1, 0.2, …, 1 кг конфет.*/
float k;
printf("cost of sweets\n");
scanf( "%f", &k);
printf("-------\n");
float b;
for (b = 0.1; b<=1.1; b+=0.1){
   printf("%.2f \n", k*b);
} 
return  0;
}
