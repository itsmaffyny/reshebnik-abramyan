#include <stdio.h>

int main (void)
{
int a=10;
int *p = &a;

printf("Adress of a is %d \n", &a);
printf("Adress of p is %d \n", p);
printf("Value of p is %d \n", *p);
printf("the size of int is %d\n", sizeof(int));
printf("Adress of p+1 is %d \n", (p+1));
printf("Value of p in p+1 is %d \n", *(p+1));
return 0;
}
