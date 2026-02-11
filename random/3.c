#include <stdio.h>
#include <math.h>

// 2. The Precision CircleInput: A floating-point number for radius.
// Output: The area of the circle.Constraint: Use a constant for $\pi$ ($3.14159$).
// Test Case: If radius is 5, output should be 78.539750 (or similar depending on your float precision).

float mult(int given)
{
const float pi = 3.14159;
float powof2=pow(given, 2);
float multipl = pi * powof2; 
return  multipl;
}

int main (void)
{
int given;
printf("give r: ");
scanf(" %i", &given);
printf("%.6f", mult(given));
return 0;

}
