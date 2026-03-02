#include <stdio.h>

int main (void)
{
int a= 12;
int *p = &a;
*p=16;
int **l= &p;
**l=18;
int ***q= &l;
***q=22;

printf("%d \n", ***q);
printf("%d \n", **l);
printf("%d \n", *p);
printf("%d \n", a);

return 0;
}