#include <stdio.h>

//DOUBLES THE GIVEN NUMBERS
//GIVES YOU A SUM

void double_sum(int *storred_array, int size){
    for (int i =0; i < size; i++ ){
        storred_array[i] = 2*storred_array[i];
    }
}
int sum(int *storred_array,  int r){
    int summa =0;
    for (int i =0; i < r; i++ ){
        summa += storred_array[i];}
    return summa;
}

int main(void){ 
int k=0; int input = 0;
int stored_array[32]={0};

while(k != -1 || k<32){
    printf("A %d. number: ",k+1);
    scanf("%d", &input );
        if (input == -1){
            break;
        }
    stored_array[k]=input;
    k++;
}

int r = k;
int size= sizeof(stored_array)/sizeof(stored_array[0]);
// printf("%d\t", (size));
double_sum(stored_array, size);
int result = sum(stored_array,  r);

printf("\n-----Double-----\n");
for (int i =0; i < r; i++ ){
    printf("A %d. number: %d\n", i+1, stored_array[i]);
}
printf("\n-------Sum------\n");
printf("%d", result);
return 0; 
}
