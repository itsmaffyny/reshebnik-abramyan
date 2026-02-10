#include <stdio.h> 
#include <math.h>

int main(void)
{
   /*
For11. Дано целое число N (> 0). 
Найти сумму N^2 + (N + 1)^2 + (N + 2)^2 +…+ (2*N)^2 (целое число).*/

int k;
printf("1st\n");
scanf( "%d", &k);
printf("-------\n");

int n, sum=0;
for (n = k; n<=k*2; n++){
   sum += n*n;
   printf("%d \t %d \n",n, sum);
} 
return  0;
}
