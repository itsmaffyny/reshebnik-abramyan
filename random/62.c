#include <stdio.h>
typedef struct menu{
    float prise;
    //char *name;
    // int gramms;
    // int quantity;
}MENU;

int main (){
    MENU chicken;
    printf("Prise? ");        
    scanf("%f", &chicken.prise);
    
    printf("%.2f", chicken.prise);   

    return 0;
}