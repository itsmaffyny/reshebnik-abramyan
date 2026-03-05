#include <stdio.h>
#include <stdlib.h>
int main(void){
    
int x;
printf("Gimme an array limit: ");
scanf("%d", &x);
int *pnt=(int*)malloc(x*sizeof(int));
if (x > 0){
    printf("--------INPUT-------\n");
for (int i = 0; i < x; i++) {
    printf("A %d. number: ",i+1);
    scanf("%d",  pnt+i);
}printf("------OUTPUT--------\n");

for (int i =0; i < x; i++ ){
    printf("A %d. number: %d\n", i+1, *(pnt+i));
}} else{ printf("This can not be a limit");}

return 0; 
}
