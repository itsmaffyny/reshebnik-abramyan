#include <stdio.h> 

int main(void)
{
   /*
   For9. Даны два целых числа A и B (A < B). 
   Найти сумму квадратов  всех целых чисел от A до B включительно.*/

int k,n;
printf("1st\n");
scanf( "%d", &k);
printf("2nd\n");
scanf( "%d", &n);
printf("-------\n");
int b, sum=0;
for (b =k; b<=n; b++){
   sum+=b*b;
   printf("%d \t %d \t %d \n",b, b*b, sum);
} 
return  0;
}
