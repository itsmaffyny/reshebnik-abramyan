#include <stdio.h>

// 1. The Clock Splitter
// Input: A single integer representing total seconds.
// Output: H:M:S format.
// Test Case: If input is 7500, output should be 2:5:0.
int divide(int given)
{
int secs = given % 60; 
int total_mins = given / 60;
int mins = total_mins % 60;
int total_hrs =  given / 60;
int hrs =  total_hrs % 60;
int total_days = given /24;
int days = total_days %24;
printf("%d:%d:%d:%d", days, hrs, mins, secs);


return  0;
}

int main (void)
{
int given;
printf("give me the amount of secs: ");
scanf(" %d", &given);
divide(given);
return 0;

}




// ex 54634534