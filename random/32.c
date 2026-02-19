#include <stdio.h>

int main(void){
int b= 31;
int *a= &b;
printf("b: %d\n",b);
printf("&b: %p\n",&b);
printf("a: %p\n", a);

*a =42;
printf("b: %d\n",b);
printf("&b: %p\n",&b);
printf("a: %p\n", a);
return 0; 
}
