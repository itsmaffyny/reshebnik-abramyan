#include <stdio.h> 
   typedef union abs{
    char b;
    int k;
   }REAL;
int main()
{
REAL DEAL={0};
DEAL.b ='E';
REAL *REAKK=&DEAL;
 printf("%d",REAKK->k);
return 0;
}
