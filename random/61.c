#include <stdio.h>

int main (void){
for (int i=1; i<=5; i++){
    for (int j=1; j<=5; j++){
        printf(" * ");
    }
    printf("\n");
}
printf("\n");
int n =5;
for (int i=1; i<=n; i++){
    for (int j=1; j<=i; j++){
        printf(" * ");
    }
    printf("\n");
}
int c =1;
for (int i=4; i>=c; i--){
    for (int j=i; j>=c; j--){
        printf(" * ");
    }
    printf("\n");
}
return 0;
}
