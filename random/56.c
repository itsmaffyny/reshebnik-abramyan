#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void){
 char *password1;
 char *password2;
 password1 = malloc(7 * sizeof(char));
 password2 = malloc(7 * sizeof(char));
 strcpy(password1, "abc123");
 strcpy(password2, "xyz789");
 printf("p1 addr: %p\np2 addr: %p\n", password1, password2);
printf("p1 addr: %d\np2 addr: %d\n", (int)password1, (int)password2);
for(int i=0; i < 100; i++){
    printf("%c", password1[i]);
}
char *other_ptr;
other_ptr = password1;
password1 = realloc(password1, 20 * sizeof(char));
printf("password1: %s\n\n", password1);
printf("p1 addr: %p\np2 addr: %p\n", password1, password2);
printf("p1 addr: %d\np2 addr: %d\n", (int)password1, (int)password2);
printf("other_ptr address: %d\n", (int)other_ptr);
printf("other_ptr string: %s\n\n", other_ptr);
for(int i=0; i < 100; i++){
 printf("%c", other_ptr[i]);
}
return 0;
}