#include <stdio.h>
#include <string.h>

// Problem 1: The Percent Calculator
// The Task: Ask for two integers: score and total.
// The Goal: Calculate the percentage (score divided by total, then multiplied by 100).
// The Challenge: If you do score / total with integers, 
// C will give you 0 for any score less than the total. 
// You must cast at least one of them to a float before the division happens.
// Output: Percentage: 85.5%

int main (void)
{
int score, total;
printf("give me score: ");
scanf("%i", &score);
printf("give me total: ");
scanf("%i",  &total);
double per= ((double) score / total) *100; 
printf("give me a string: %.1lf %c", per, 37);

return 0;
}
