#include <stdio.h> 

int main(void)
{
   /*
   For10. Дано целое число N (> 0). 
   Найти сумму 1 + 1/2 + 1/3 + … + 1/N (вещественное число).*/

int n;
printf("1st\n");
scanf( "%d", &n);
printf("-------\n");

double b, sum;
for (b = 1.0; b<=n; b++){
   sum+= 1/b;
   printf("%.2f \t %.2f \n",b, sum);
} 
return  0;
}
