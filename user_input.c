#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age); // scanf enables user to enter information into the program, & acts as a pointer
    printf("Your age is %d years old", age);
    return 0;
}