#include <stdio.h> 

int main(void)
{
   /*For2. Даны два целых числа A и B (A < B). Вывести в порядке возрастания все 
   целые числа, расположенные между A и B (включая сами числа A и B), 
   а также количество N этих чисел.*/
int k, n ;
printf("What num do u want? \n");
scanf( "%i", &k);
printf("how many times do u want? \n");
scanf( "%i", &n);
int b;
printf("-------\n");
for (b = k; b<=n; ++b){
   printf("%i \n", b);
}
printf("%i", n-k+1);
return  0;
}
