#include <stdio.h> 

int main(void)
{
   /*Case9. Даны два целых числа: D (день) и M (месяц), определяющие правильную дату 
   невисокосного года. Вывести значения D и M для даты, следующей за указанной.*/
int days, months;
printf("What day do u want? \n");
scanf( "%d", &days);
printf("What month do u want? \n");
scanf( "%d", &months);

if (  days >= 0 && days <= 31)
{
printf("days: %d\n", days+1); 
}
else {
   printf("no such day as: %d\n", days);
}

if (  months >= 0 && months <= 13)
{
   printf("months: %d\n", months+1); 
}
else {
   printf("no such month as: %d\n", months);
}
return  0;
}
