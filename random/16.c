#include <stdio.h>

// Problem 3: The Secret Note (Final File Challenge)
// Now that you have mastered Write Mode ("w"), try Append Mode ("a").
// The Difference: "w" wipes the file every time you start. 
// "a" starts at the end of the file and keeps adding more.
// The Task: Modify your program to ask for one word (a string) 
// and append it to a file called notes.txt.
// The Test: Run the program three times. Each time, type a different word. 
// When you open notes.txt, you should see all three words saved there.

int main (void)
{
char word[16];
printf( "Give me a word: \n");
scanf("%s", word);

FILE *word_q;
word_q= fopen("notes.txt", "a");

// fprintf(word_q, "So the words were: \n");
fprintf(word_q, " %s ", word);

fclose(word_q);

return 0;
}
