#include <stdio.h>

// Problem 1: The Product of DigitsInstead of adding the digits, let's multiply them.
// The Goal: Write int multiply_digits(int n) so that an input of 412 returns 8 ($4 \times 1 \times 2$).


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
if (n<10) return n; 
 return (n%10) * count_digits(n/10);
}
