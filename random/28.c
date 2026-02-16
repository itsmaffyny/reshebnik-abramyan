#include <stdio.h>

// Problem 5: Currency / Coin Splitter
// The Task: Ask the user for an amount of money in cents (e.g., 287).
// The Goal: Split it into Dollars, Quarters (25c), and Remaining Cents.
// Logic: * Dollars = total / 100
// Remainder = total % 100
// Quarters = remainder / 25
// Final Cents = remainder % 25
// Test Case: Input 287 -> 2 Dollars, 3 Quarters, 12 Cents.

int main (void){
int n;
 printf("Give me an n: ");
 scanf("%i", &n);

int dollars= n/100;
int remainder = n%100;
int quarters= remainder/25; 
int cents= remainder%25;

printf("mins and seconds %i dollars %i quarters, %i cents", dollars, quarters, cents);

return 0; }
