#include <stdio.h>
typedef struct menu{
    int number;
    int quantity;
    int gramms;
    float prise;
}MENU;

int main (){
int i;
MENU catalog[3] = {
    {1, 0, 350, 37.50},
    {2, 0, 250, 15.20},
    {3, 0, 300, 30.00}};

float final_check=0;
for (int l =1; l<=64; l++){
    printf("Menu: \n1.Chicken \n2.Pasta \n3.Fish \n");
    printf("What dish do you want? 1/2/3 (0 to exit) ");
    scanf("%d", &i);
        if (i == 1 ||i == 2 || i == 3) {
            MENU selected_item= catalog [i-1];
            printf("How many portions do you want? ");
            scanf("%d", &selected_item.quantity);
            if (selected_item.quantity == 0){break;}
            final_check += selected_item.quantity * selected_item.prise;}
        else if (i==0){break;}
        else {printf("No such item on the menu");}
}
printf("----------------------\n\tCHECK\n");
printf("Your total is: $%.2f", final_check);
printf("\n----------------------\n");
int percentage = 1;
int percent_pl_total =1;
for(int i=10; i<=20; i+=5 ){
    percentage = (final_check * i) /100;
    percent_pl_total = percentage + final_check;
    printf("%d of $%.2f is: $%d\n", i, final_check, percentage);
    printf("Which makes it $%d total\n", percent_pl_total);}
printf("----------------------\n");
return 0;
}