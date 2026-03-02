#include <stdio.h>
#include <stdbool.h>
 
//CAN U VOTE?

int main (void)
{
int const MINAGE =18;
int YourAge;
printf("---CAN YOU VOTE?---\n");
printf("What is your age? ");
scanf("%d", &YourAge);

bool compare = YourAge> MINAGE;
if (compare == 1){printf("Yes");}
     else{printf("No");}
return 0;
}
