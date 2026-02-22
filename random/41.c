#include <stdio.h>

int main (void)
{
char given[164]; 
printf("give me a string: ");
fgets(given, 164, stdin);
int substr;
for(int i= 0; given[i]!='\0'; i++){
    substr= given[i]+3;
    printf("%c", substr );
}

return 0;
}
