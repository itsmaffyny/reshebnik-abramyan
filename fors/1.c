#include <stdio.h> 

int main(void)
{
   /*For1. Даны целые числа K и N (N > 0). Вывести N раз число K.*/
int k, n;
int b = 0;
printf("What num do u want? \n");
scanf( "%d", &k);
printf("how many times do u want? \n");
scanf( "%d", &n);

for (b == 0; b<n; b++){
   printf("%i \n", k);
}
printf("final %i", k);
return  0;
}
