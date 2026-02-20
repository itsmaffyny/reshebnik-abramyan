#include <stdio.h>

// 3. The Null Protector
// Goal: Create a function that safely doubles an integer's value,
//  but only if the pointer provided isn't "empty."

void DoubleValue(int *a){
*a = *a *2;
}


int main(void){
int x;
printf("Gimme a number: ");
scanf("%d", &x);
DoubleValue(&x);
if (x == NULL){
    printf("It can't be 0!");
}else {
 printf("Double of given value: %d", x);
}

return 0; 
}
