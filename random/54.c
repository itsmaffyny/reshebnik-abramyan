#include <stdio.h>

int main (void){
int total_sum;
printf("What is the total of your cheque? ");
scanf("%d", &total_sum);
int percentage = 1;
int percent_pl_total =1;
for(int i=10; i<=20; i+=5 ){
    percentage = (total_sum * i) /100;
    percent_pl_total = percentage + total_sum;
    printf("%d of %d is: %d\n", i, total_sum, percentage);
    printf("Which makes it %d total\n", percent_pl_total);
}

return 0;
}