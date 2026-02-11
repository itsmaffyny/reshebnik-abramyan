#include <stdio.h>
#include <math.h>

// 1. The Average Finder
// Task: Create an array of 5 integers. Ask the user to input values for all 5.
// Goal: Calculate and print the average of those numbers.
// Logic: Use a for loop to fill the array and another for loop to sum them up.

int main (void)
{
int given[5];
int total=0;
int avrg = 0; 
for(int i= 0; i<5; i++){
    printf("give num: ", i+1);
    scanf("%i", &given[i]);}

for (int i = 0; i<5; i++){
    total+= given[i];}

avrg= total / 5;
printf("avrg: %i", avrg);
return 0;
}
