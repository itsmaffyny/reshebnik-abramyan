#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// You are managing a dynamic array of passwords, 
// but the requirements just changed. You need to shrink the array, 
// but you cannot leave the old passwords sitting in the heap.

int main (void){
char passwords[] = "pasw1 pasw2 pasw3 idk";
int i=1; for (i=1; passwords[i] != '\0'; i++){}
printf("%d", i); //22 

char *pnt_temp=malloc(22* sizeof(char));
memcpy(pnt_temp, passwords, 22* sizeof(char));

char *check =malloc(17* sizeof(char));
if (check !=NULL){
    memcpy(check,  pnt_temp, 16* sizeof(char));
    check[16]='\0';
    memset(pnt_temp, 0, 22* sizeof(char));
    free(pnt_temp);
}
pnt_temp=check;
for(int i=0; i<16; i++){
    printf("%c",pnt_temp[i]);
}
free(pnt_temp);
return 0;
}
