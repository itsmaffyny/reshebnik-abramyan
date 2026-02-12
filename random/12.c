#include <stdio.h>
#include <string.h>

// Problem 2: The Character Map (Int to Char)
// Every character is secretly an integer. 
// This problem helps you visualize how casting switches between the "Number" and the "Symbol."
// The Task: Ask the user to enter an integer between 65 and 90.
// The Goal: Take that int and cast it to a char.
// Output: Print both the number and the character. (e.g., "Number 65 is the character A").

int main (void)
{
int letter;
printf("give me a number between 65 and 90: ");
scanf("%i", &letter);

char inascii= (char) letter; 
printf("Your letter %i is %c in ASCII",letter, inascii);

return 0;
}
