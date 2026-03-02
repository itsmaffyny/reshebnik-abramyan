#include <stdio.h>

// Above main(), declare a function named add that returns an int and takes two int parameters named x and y
// Inside main(), create an int variable named result and set it to add(5, 3)
// Inside main(), print result using the correct format specifier
// End main() with return 0;
// Below main(), define the add function using the same parameter names x and y
// Inside add, return x + y
// The result should be 8.

inline int add(int x, int y);

int main ()
{
int result= add(5,3);
printf("Result: %d", result);
return 0;
}
inline int add(int x, int y){
return x+y; 
}
