#include <stdio.h>
// Problem 1: The Factorial CalculatorThis is the "Hello World" of recursion.
// The Goal: Write a function int factorial(int n) that calculates
//   $5! = 5 * 4 * 3 * 2 * 1.
// The Logic: * Base Case: If n is 1, return 1.
// Recursive Step: return $n \times factorial(n - 1)$.
// Test Case: If input is 5, output should be 120.

int factorial(int n);


int main (void){
int n;
 printf("Give me an n: ");
 scanf("%i", &n);
 int fact=factorial(n);
 printf("Result: %i", fact);
return 0;
}

int factorial(int n){
if (n== 1) return 1; 
 return n* factorial(n-1);
}
