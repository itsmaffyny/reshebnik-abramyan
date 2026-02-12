#include <stdio.h>
#include <string.h>

// Problem 2: The Shouter (Uppercase Converter)
// Every character in C has a number assigned to it (ASCII). 
// For example, 'a' is 97 and 'A' is 65. The difference is always 32.
// The Task: Take a lowercase string from the user.
// The Goal: Subtract 32 from every character to turn it into uppercase.
// Output: If the user types "hello", your program should print "HELLO".

int main (void)
{
char given[16]; 
printf("give me a string: ");
scanf("%s", given);
int substr;
for(int i= 0; given[i]!='\0'; i++){
    substr= given[i]-32;
    printf("%c", substr );
}

return 0;
}
