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
    
int x;
printf("Gimme an array limit: ");
scanf("%d", &x);
int stored_array[16];

printf("--------------\n");
for (int i = 0; i < x; i++) {
    printf("A %d. number: ",i+1);
    scanf("%d",  &stored_array[i]);
}
int *p = &stored_array[16];
printf("--------------\n");
for (int i = 0; i < x; i++){
    int b=0;;
    printf("A %d. number: %d\n", i+1, p[b+i]);
}

return 0; 
}
