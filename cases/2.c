#include <stdio.h> 

int main(void)
{
 int x= 0;
 printf("What is the mpths? \n");
scanf( "%d", &x);
switch (x)
{
case 12:
case 1:
case 2:
   printf("WINTER\n");
   break;
case 3:
case 4:
case 5:
   printf("Fruhling\n");
   break;
case 6:
case 7:
case 8:
   printf("Sommer\n");
   break;
case 9:
case 10:
case 11:
   printf("Herbst\n");
   break;
default:
   printf("there is no such month as %d\n", x);
   break;
}
return  0;
}
