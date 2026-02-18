#include <stdio.h>

// The Task:
// Write a program that declares one Book variable. 
// Ask the user to input the title, author, and price, 
// then display the entered details in a clean format.

typedef struct 
{
char title[50];
char author[50];
float price;
}book;

void print_book(book One); 

int main(void){

book one;

printf("Title: ");
scanf("%s", one.title);
printf("Author: ");
scanf("%s", one.author);
printf("Price: ");
scanf("%f", &one.price);
  
print_book(one);
return 0; 
}

void print_book(book base){
printf("-------\nTitle: %s\nAuthor: %s\nPrice: %.2f\n-------\n", base.title, base.author, base.price);
    
}