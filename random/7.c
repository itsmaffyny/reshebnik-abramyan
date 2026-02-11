#include <stdio.h>
#include <math.h>

// 3. The Reverse Print
// Task: Take 5 numbers from the user and store them in an array.
// Goal: Print the numbers in the exact opposite order they were entered.
// Hint: Start your for loop at index 4 and count down to 0 using i--.

int main (void)
{
int given[5]; 
for(int i= 0; i<5; i++){
    printf("give num: ", i+1);
    scanf("%i", &given[i]);}

for (int i = 4; i>=0; i--){
    printf( "%i",given[i]);}

return 0;
}
