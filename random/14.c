#include <stdio.h>

int main (void)
{
FILE *neues;
neues= fopen("new.txt", "w");
fputs("\n 2 some text", neues);

fclose(neues);

return 0;
}
