#include <stdio.h>
#include <string.h>

int main (void){
int A[32];
memset(A, 0, sizeof(int)*32);
int B[64];
for(int i=0; i<5; i++){
    scanf("%d", &A[i]);
        if (A[i]==-1){
            exit(0);
        }
}
memcpy(B, A, sizeof(int)*64);
for(int i=0; i<32; i++){
printf("%d",B[i]);}

return 0;
}