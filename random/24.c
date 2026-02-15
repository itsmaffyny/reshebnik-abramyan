#include <stdio.h>

// Problem 1: The LED Toggler (Even/Odd)
// The Task: Ask the user for a number.
// The Goal: Print 1 if the number is Even and 0 if the number is Odd.
// Constraint: Use only % and a relational operator (==).
// Logic: Any number % 2 will result in either 0 (even) or 1 (odd).

int count_digits(int n);


int main (void){
int n;
 printf("Give me an n: ");
 scanf("%i", &n);

if (n%2==0){
    printf("the number is even");
} else {printf("The number is odd");}

return 0;
}

