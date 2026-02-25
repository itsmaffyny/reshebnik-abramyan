#include <stdio.h>

int main (void)
{
int A[5]={1,4,5,6,7};
int *p = A;
for (int i=0; i<5; i++){
printf("Adress: %p \n", &A[i]);
printf("Value: %d \n", p[i]);
}
return 0;
}