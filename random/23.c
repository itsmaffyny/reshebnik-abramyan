#include <stdio.h>

// Problem 1.1: The LED Toggler (Even/Odd)
// The Task: Ask the user for a number.
// The Goal: Print 1 if the number is Even and 0 if the number is Odd.

int count_digits(int n);


int main (void){
int n;
 printf("Give me an n: ");
 scanf("%i", &n);

if (count_digits(n)==1){
 printf("Your number is odd");}
 else{ printf("Your number is even");}
return 0;
}

int count_digits(int n){
if (n==0) return 0; 
if (n==1) return 1; 
 return (n%2);
}
