#include <stdio.h> 
int main()
{
    int i=0,j=1,k;
     k=(++i,++j);
    printf("%d%d%d ",i,j,k);
    k=(i++,j++);
    printf("%d%d%d",i,j,k);
    return 0;
}
