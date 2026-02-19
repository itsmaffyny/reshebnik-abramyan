#include <stdio.h>

// The Problem: The "Triple Threat"
// Your goal is to write a function called tripleValue. 
// Instead of returning a new number, this function must use 
// a pointer to directly triple the value of an integer stored in your main function.

void tripleValue(int *a){
*a = *a *3;
}


int main(void){
int x;
printf("Gimme a number: ");
scanf("%d", &x);
tripleValue(&x);
printf("After: %d", x);
return 0; 
}
