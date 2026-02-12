#include <stdio.h>

// Problem 3: The Average of Sensor Data
// When reading from a 10-bit sensor (like a thermometer), 
// you get whole numbers (0-1023), but the average temperature is usually a decimal.

// The Task: Create an array of 3 integers: {400, 405, 412}.
// The Goal: Calculate the average.
// The Constraint: Sum the numbers into an int sum variable first. 
// Then, in the final calculation, cast that sum to a double before dividing by 3 to get a precise average.
// Output: Average: 405.666667

int main (void)
{
int temp[]={400,405,412};
int i, sum;
for(i=0; i<3; i++){
    sum += temp[i];
}

double aver= (double) sum /3;
printf("Average temp is %.5lf", aver);

return 0;
}
