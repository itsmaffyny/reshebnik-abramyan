#include <stdio.h>
#include <math.h>

// The Task:
// Declare two variables of type Point (e.g., p1 and p2).
// Get the coordinates for both points from the user.
// Calculate the Euclidean distance between these two points using the formula:
// distance = sqrt((x2 - x1)^2 + (y2 - y1)^2)
// Print the result. (Note: You will need to include <math.h> and link the math library).

typedef struct 
{
int x;
int y;
}Point;

int main(void){
Point p1;
Point p2;

printf("Point 1 x, y: ");
scanf("%d %d", &p1.x, &p1.y);
printf("Point 2 x, y: ");
scanf("%d %d", &p2.x, &p2.y);

double dx=(double) (p2.x - p1.x);
double dy=(double) (p2.y - p1.y);


double distance = sqrt((dx*dx)+(dy*dy));
printf("Distance: %.3f", distance);

return 0; 
}
