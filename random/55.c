#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void){
// #if 0 
int *pnt; // whaaaaaat??/
int *pnt2;
int *other_pnt;
strcpy(pnt, "abc12");
strcpy(pnt2, "xyz17");
pnt=(char *)malloc(sizeof(char));
pnt2=(char *)malloc(sizeof(char));
printf("%p\n",pnt);
printf("%p\n",pnt2);
printf("%d\n",(int)pnt);
printf("%d\n",(int)pnt2);
for(int i=0; i < 100; i++){
 printf("%c", pnt[i]);
}
printf("------------\n");
pnt =(int*)realloc(pnt, 2*sizeof(int));
pnt2 =(int*)realloc(pnt2, 2*sizeof(int));
printf("%p\n",pnt);
printf("%p\n",pnt2);
printf("%d\n",(int)pnt);
printf("%d\n",(int)pnt2);
printf("------------\n");
other_pnt =(int*)realloc(pnt, 20*sizeof(int));
printf("%p\n",pnt);
printf("%p\n",other_pnt);
printf("%d\n",(int)pnt);
printf("%d\n",(int)other_pnt);
free(pnt);
// #endif /*0*/ 
// printf("%",);
// printf("%",);
/*bruuu */
return 0;
}