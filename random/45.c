#include <stdio.h>

//DOUBLE 
//SUM SUM POINT

void double_sum(int *storred_array, int size){
    for (int i =0; i < size; i++ ){
        storred_array[i] = 2*storred_array[i];
    }
}

// void sum(int *storred_array, int size){
//     int sum=0;
//     for (int i =0; i < size; i++ ){
//         sum += storred_array[i];
//     }
// }

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
// sum(stored_array, size);
printf("-----Double-----\n");
for (int i =0; i < r; i++ ){
    printf("A %d. number: %d\n", i+1, stored_array[i]);
}
printf("-------Sum------\n");

return 0; 
}
