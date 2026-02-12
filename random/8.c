#include <stdio.h>
#include <string.h>

// Problem 1: The Character Counter
// The Task: Ask the user to enter their first name (max 20 characters).
// The Goal: Use a while loop to count how many characters are in the name without using the built-in strlen function.
// Hint: Start a counter at 0. Loop through the array until you hit the null terminator (name[i] == '\0').

int main (void)
{
char given[20]; 
printf("give me a string: ");
scanf("%s", given);
int sum=0;
for(int i= 0; given[i]!='\0'; i++){
    sum++;
}
printf("give num: %d", sum );
return 0;
}
