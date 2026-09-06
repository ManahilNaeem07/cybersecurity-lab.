#include <stdio.h>
int main(){
    char IncidentID [50];
    char Analyst [50];
    int num = 0;
    float estimate = 0.00;
    float hours = 0.00;
    float total = 0.00;

    printf("Incident ID: ");
    scanf("%s", IncidentID);

    printf("Analyst Name: ");
    scanf("%s", Analyst);

    printf("Number of Affected Systems: ");
    scanf("%d", &num);

    printf("Estimated Recovery Cost: ");
    scanf("%f", &estimate);

    printf("Downtime in hours: ");
    scanf("%f", &hours);

    total=num*estimate;

    printf("Incident ID: %s \n", IncidentID);
    printf("Analyst Name: %s \n", Analyst);
    printf("Number of Affected Systems: %d \n", num);
    printf("Estimated Recovery Cost: %.2f \n", estimate);
    printf("Total Recovery Cost: %.2f \n", total);
    printf("Downtime in hours: %.2f \n", hours);

}