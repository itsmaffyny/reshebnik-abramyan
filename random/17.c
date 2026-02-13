#include <stdio.h>


int main (void)
{
char descr[128];
int sec_risk;
float risk_factor;
printf( "Give des for a security risk: \n");
fgets(descr, 100, stdin);
printf( "Give 1 to 10 for a security risk: \n");
scanf("%i", &sec_risk);
printf( "Give 0.1-1 risk factor: \n");
scanf("%f", &risk_factor);
float total_score = (float) risk_factor * sec_risk;

FILE *critical_logs = fopen("vault_logs.txt", "a");
if (total_score>=5 ){
    fprintf(critical_logs, "Total score: %.2lf \nDescription: %s \n",total_score, descr);}
else  {
    fprintf(critical_logs, "This issue is not critical\n");}

fclose(critical_logs);

return 0;
}
