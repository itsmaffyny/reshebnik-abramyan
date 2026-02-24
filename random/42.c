#include <stdio.h>

int main (void)
{
int a=6;
int *p = &a;
// int *p;
printf("%d \n%d\n", &a, p);
*p= 18; 
printf("%d", a);


return 0;
}
