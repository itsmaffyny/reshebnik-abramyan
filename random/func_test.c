#include <stdio.h> 
#include <math.h>

int add(int q, int r)
{
int result = q+r;
return  result;
}

int main (void)
{
int output = add(6,7);
printf("%d\n", output);
}