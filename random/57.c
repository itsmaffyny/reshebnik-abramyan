#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//You are writing a program to log temperature readings. 
//You start with enough space for 5 readings, but you need to expand it to hold 10.

int main (void){
double *pnt_temp=calloc(5,sizeof(double));
memcpy(pnt_temp,(double[]){0, 5, 7, 3, 1}, 5 * sizeof(double));

double *check =calloc(20,sizeof(double));
if (check != NULL){
    memcpy(check,  pnt_temp, 20* sizeof(double));
    memset(pnt_temp, 0, 5* sizeof(double));
    free(pnt_temp);
}
pnt_temp=check;
for(int i=0; i<20; i++){
    printf("%lf \n",pnt_temp[i]);
}

return 0;
}
