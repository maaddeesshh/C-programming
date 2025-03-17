#include<stdio.h>
int main()
{
    char name[20];
    char NAME[15];
    printf("Enter your name: ");
    fgets(name,20,stdin);
    printf("Your name is %s", name);
    printf("Enter your NAME: ");
    scanf("%s", NAME);
    printf("Your NAME is %s", NAME);
    return 0;
}