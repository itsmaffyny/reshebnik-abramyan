#include <stdio.h> 
#include <math.h>

int main(void)
{
   /*
For12. Дано целое число N (> 0). 
Найти произведение 1.1 *1.2 * 1.3 *… (N сомножителей).*/

int k;
printf("1st\n");
scanf( "%d", &k);
printf("-------\n");

float n, sum=1;
for (n=0; n<=k; ++n){
   sum *=1.0+ (float)n/10;
   printf("%.2f \t %.2f \n",n, sum);
} 
return  0;
}
