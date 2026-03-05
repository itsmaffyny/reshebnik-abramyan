#include <stdio.h>
#include <stdlib.h>
int main(void){
    
int x,n,l;
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
}} else{ printf("This can not be a limit"); exit(1);}

printf("Do you want to add more numbers to it? yes(1)/no(0) ");
scanf("%d", &n);
if (n == 0 || n != 1){
    free(pnt);
    exit(1);
}
printf("And you want to change the limit to? ");
scanf("%d", &l);
if (l <=x ){
    printf("no.");
    free(pnt);
    exit(1);
}
int *pnt2=(int*)realloc(pnt, l*sizeof(int));
if (pnt2 != NULL) {
    pnt = pnt2; }
for (int i = x; i < l; i++) {
    printf("A %d. number: ",i+1);
    scanf("%d",  pnt+i);
}printf("------TOTAL OUTPUT--------\n");

for (int i =0; i < l; i++ ){
    printf("A %d. number: %d\n", i+1, *(pnt+i));
}
free(pnt); 
return 0; 
}
