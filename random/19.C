#include <stdio.h>
// Problem 2: Sum of Natural Numbers
// The Goal: Write a function int sum_recursive(int n) that adds up all 
// numbers from n down to 1. (e.g., if $n$ is 4, the result is $4 + 3 + 2 + 1 = 10$).


int sum(int n);


int main (void){
int n;
 printf("Give me an n: ");
 scanf("%i", &n);

 int result=sum(n);
 printf("Result: %i", result);
return 0;
}

int sum(int n){
if (n== 1) return 1; 
 return n+sum(n-1);
}
