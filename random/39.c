#include <stdio.h>

// Write a program in C to find the maximum number between two numbers using a pointer.
// Test Data :
// Input the first number : 5
// Input the second number : 6
// Expected Output : 6 is the maximum number. 

void DoubleValue(int *a, int *b, int *c){
if (*a> *b){ 
    *c= *a; }
else{ *c= *b;}
}

int main(void){
int x, y;
int z=0;

printf("Gimme a 1st number: ");
scanf("%d", &x);

printf("Gimme a 2nd number: ");
scanf("%d", &y);

DoubleValue(&x, &y, &z);
printf("%d", z);
return 0; 
}
