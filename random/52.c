#include <stdio.h>

int main(void){
    
int x;
printf("Gimme an array limit: ");
scanf("%d", &x);
int stored_array[16];

printf("--------------\n");
for (int i = 0; i < x; i++) {
    printf("A %d. number: ",i+1);
    scanf("%d",  &stored_array[i]);
}

int *p = stored_array;
printf("--------------\n");
for (int i =0; i < x; i++ ){
    printf("A %d. number: %d\n", i+1, p[i]);
}

return 0; 
}
