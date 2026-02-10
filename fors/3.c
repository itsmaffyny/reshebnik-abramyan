#include <stdio.h> 

int main(void)
{
   /*For3. Даны два целых числа A и B (A < B(n)). Вывести в порядке убывания 
   все целые числа, расположенные между A и B (не включая числа A и B), 
   а также количество N этих чисел.*/
int k, n ;
printf("What num do u want? \n");
scanf( "%i", &k);
printf("how many times do u want? \n");
scanf( "%i", &n);
int b;
printf("-------\n");
for (b = n; b>=k; --b){
   printf("%i \n", b);
}
printf("amount %i", n-k+1);
return  0;
}
