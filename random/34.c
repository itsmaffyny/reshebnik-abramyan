#include <stdio.h>

void swap(int *a, int *b){
int temp = 0;
temp = *a;
*a = *b;
*b = temp;
}
int main(void){
int x,y;
printf("Gimme 2 numbers: ");
scanf("%d %d", &x, &y);
swap(&x, &y);
printf("Swaped: %d %d", x, y);

return 0; 
}
