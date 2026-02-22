#include <stdio.h>

// Write a program in C to store n elements in an array and print the elements using a pointer.

// Test Data :
// Input the number of elements to store in the array :5
// Input 5 number of elements in the array :

// Expected Output :
//  The elements you entered are :                                                                               
//  element - 0 : 5                                                                                              
//  element - 1 : 7                                                                                              
//  element - 2 : 2                                                                                              
//  element - 3 : 9                                                                                              
//  element - 4 : 8   

int main(void){
int stored_array[32];
int *ptr = stored_array; 
int x=0;

printf("Gimme an array limit: ");
scanf("%d", &x);


for (int i=0; i<x; i++){
    printf("Gimme a %d. number: ", i+1);
    scanf("%d", &stored_array[i]);
}
printf("--------------\n");
for (int i = 0; i < x; i++) {
    printf("A %d. number: %d\n",i+1, *(ptr + i));
}
return 0; 
}
