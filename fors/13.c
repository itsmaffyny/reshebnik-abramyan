#include <stdio.h> 
#include <math.h>

int main(void)
{
   /*
For13. Дано целое число N (> 0). 
Найти значение выражения 1.1 — 1.2 + 1.3 — … (N слагаемых, знаки чередуются).
Условный оператор не использовать.*/

int k;
printf("1st\n");
scanf( "%d", &k);
printf("-------\n");

double n, sum=1, sum2=1;
for (n=0; n<=k; ++n){
   sum +=1.0+ (double)n/10;
   printf("%.2f \t %.2f \t, %.2f \t", n, sum);
      for (n=0; n<=k; ++n){
         sum2 -=1.0+ (float)n/10;
         printf("---- %.2f \t %.2f \t, ---- %.2f \t", n, sum2);} 

} 
double rez;
rez= sum+ sum2;
printf("%.2f", rez);
return  0;
}
