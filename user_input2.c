#include<stdio.h>
int main()
{
    float gpa;
    double GPA;
    printf("Enter your gpa: ");
    scanf("%f", &gpa);
    printf("You have a gpa of %f\n", gpa);
    printf("Enter your GPA: ");
    scanf("%lf", &GPA);
    printf("You have a gpa of %f", GPA);

    return 0;
}

