#include <stdio.h>
#include <string.h>

// Problem 3: The Secret Decoder (Caesar Cipher)
// This is a classic programming challenge. You are going to "encrypt" a word.
// The Task: Take a word from the user.
// The Goal: Add 1 to the ASCII value of every letter in the string.
// Example: If the input is "abc", the output should be "bcd".
// Requirement: Print the final "encrypted" string using %s.

int main (void)
{
char given[16]; 
printf("give me a string: ");
scanf("%s", given);
int substr;
for(int i= 0; given[i]!='\0'; i++){
    substr= given[i]+1;
    printf("%c", substr );
}

return 0;
}
