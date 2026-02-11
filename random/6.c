#include <stdio.h>
#include <math.h>

// 2. The Search Party
// Task: Create an array with the values {10, 22, 35, 40, 50}.
// Goal: Ask the user for a "target" number. 
// Print 1 if that number is in the array, and 0 if it isn't.
// Constraint: Since you haven't done if statements in the playlist yet, 
// you can try to use a relational operator inside a loop.

int main (void)
{
int b;
int found=0;
int given[]={10, 22, 35, 40, 50};
printf("What is your guess? \t");
    scanf("%d", &b);
for(int i=0; i<5 ;i++){
        if (b == given[i]){
            found = 1;
        }
} 
printf("%d\n", found);
return 0;
}