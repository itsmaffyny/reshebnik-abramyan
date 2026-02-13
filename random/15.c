#include <stdio.h>

// Problem 1: The Logger (Writing to File)
// In hardware development, "logging" is used to track events or errors over time.
// The Task: Ask the user to enter three integers (like sensor readings).
// The Goal: Open a file named log.txt in write mode ("w") 
//and save those three numbers to the file, each on a new line.
// The Requirement: Don't forget to use fclose() at the end to make sure the data actually saves!
// Hint: Use fprintf(file_pointer, "%d\n", variable); just like you use a normal printf.

int main (void)
{
printf( "Give me 3 new ints: \n");
int numbs[3];
for (int i=0; i<3; i++){
    scanf("%d", &numbs[i]);
}

FILE *task;
task= fopen("log.txt", "w");
fprintf(task, "So the ints were: \n");
for (int i=0; i<3; i++){
    fprintf(task, "%i : %i \n", i, numbs[i]);
}

fclose(task);

return 0;
}
