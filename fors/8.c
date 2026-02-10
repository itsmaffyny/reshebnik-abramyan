#include <stdio.h> 

int main(void)
{
   /*
   For8. Даны два целых числа A и B (A < B). 
   Найти произведение  всех целых чисел от A до B включительно.*/

int k,n;
printf("1st\n");
scanf( "%d", &k);
printf("2nd\n");
scanf( "%d", &n);
printf("-------\n");
int b, sum=1;
for (b = k; b<=n; b++){
   sum*=b;
   printf("%d \t %d \n",b, sum );

} 
return  0;
}
