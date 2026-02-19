#include <stdio.h>

// 3. Student Grading System (Arrays of Structs)
// The Task:
// Create an array of 3 Student structures.
// Use a loop to input the name, roll number, and marks for all three students.
// Calculate and display each student’s name along with their average mark.
// Key Learning: Handling arrays of structures and nesting an array inside a structure.

typedef struct 
{
char name[50];
int roll;
int marks[3];
}Student;

int main(void){
Student class[3];

for( int i=0; i<3; i++){
printf("Name: ");
scanf("%s", class[i].name);

printf("Roll number: ");
scanf("%d", &class[i].roll);

printf("Marks: ");
scanf("%d%d%d ", &class[i].marks[0], &class[i].marks[1], &class[i].marks[2]);
printf("\n");
}



// for (int i=0; i<3; i++){
//     float sum = class[i].marks[0] + class[i].marks[1] + class[i].marks[2];
//     float average = sum / 3;
//     printf("Student number %d\nName: %s\nAverage: %.2f\n",
//          i, class[i].name, average);}
return 0; 
}
