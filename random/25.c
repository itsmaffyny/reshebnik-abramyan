#include <stdio.h>

// Problem 2: The Digital Clock (Minutes and Seconds)
// The Goal: Take a total number of seconds (like 135) 
// and turn it into 2 minutes and 15 seconds.

int main (void){
int n;
 printf("Give me an n: ");
 scanf("%i", &n);

int mins= n/60;

int seconds= n%60; 


printf("mins and seconds %i:%i", mins, seconds);

return 0; }
