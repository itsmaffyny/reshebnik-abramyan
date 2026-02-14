#include <stdio.h>
// Problem 1: The Digit Summer instead of counting how many digits there are, 
// let’s find the sum of the digits themselves.
// The Goal: Write int sum_digits(int n) so that an input of 123 returns 6 ($1 + 2 + 3$).
// Logic:Base Case: If n < 10, return the number itself.
// Recursive Step: Use % 10 to get the last digit, and add it to the result of sum_digits(n / 10).
// Test Case: sum_digits(405) should return 9.


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
 return (n%10) + count_digits(n/10);
}
