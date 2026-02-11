#include <stdio.h>
#include <math.h>

// 3. The Digit Sum
// Input: A three-digit integer (e.g., 912).
// Output: The sum of the individual digits.
// Constraint: Do not use if statements or loops. Use only / and %.
//Test Case: If input is 912, output should be 12.

int divi(int given)
{
int total_1 = given%10;
int total_2 =  (given / 10)%10;
int total_3 = given /100;
int sum = total_1+total_2+total_3;
printf("sum: %d", sum);


return  0;
}

int main (void)
{
int given;
printf("give num: ");
scanf(" %i", &given);
divi(given);
return 0;

}
