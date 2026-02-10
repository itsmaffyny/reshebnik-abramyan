#include <stdio.h> 

int main(void)
{
 int x= 0;
 printf("What is the grade? \n");
scanf( "%d", &x);
switch (x)
{
case 1:
   printf("bad\n");
   break;
case 2:
   printf("not ok\n");
   break;
case 3:
   printf("ok\n");
   break;
case 4:
   printf("good\n");
   break;
case 5:
   printf("great\n");
   break;
default:
   printf("there is no such grade as %d\n", x);
   break;
}
return  0;
}
