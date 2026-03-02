#include <stdio.h>

int main (void)
{
int const cost = 35;
int *k =&cost;
*k =36;
printf("%d", cost);

return 0;
}
