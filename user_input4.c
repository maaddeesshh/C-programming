#include<stdio.h>
int main()
{
    char teamF[50];
    char teamL[50];
    char jerseyColor[20];
    char coach[50];
    char coachL[50];

    printf("Enter a team: ");
    scanf("%s""%s", teamF,teamL);
    printf("Enter jerseyColor: ");
    scanf("%s", jerseyColor);
    printf("Enter coach Name: ");
    scanf("%s%s",coach,coachL);
    printf("My team is called %s %s\n", teamF, teamL);
    printf("The jerseyColor is %s\n",jerseyColor);
    printf("The manager's name is %s %s", coach,coachL);
    return 0;
}