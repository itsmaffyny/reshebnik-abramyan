#include <stdio.h>
// The Goal: Write a function int count_digits(int n) that counts 
// how many digits are in a number. (e.g., 1234 should return 4).


int count_digits(int n);


int main (void){
int n;
 printf("Give me an n: ");
 scanf("%i", &n);

 int result=count_digits(n);
 printf("Result: %i", result);
return 0;
}

int count_digits(int n){
if (n<10) return 1; 
 return 1+ count_digits(n/10);
}
