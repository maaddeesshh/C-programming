#include <stdio.h>

int main()
{
    char myName[] = "Eugene"; // Stores multiple characters (string)
    int age = 24;
    char name[6]; // Needs an extra space for the null terminator '\0'

    printf("Enter first letter: ");
    scanf(" %c", &name[0]); // Space before %c to consume previous newline

    printf("Enter second letter: ");
    scanf(" %c", &name[1]);

    printf("Enter third letter: ");
    scanf(" %c", &name[2]);

    printf("Enter fourth letter: ");
    scanf(" %c", &name[3]);

    printf("Enter fifth letter: ");
    scanf(" %c", &name[4]);

    name[5] = '\0'; // Null-terminate the character array to make it a string

    printf("My name is %s and I am %d years old.\n", myName, age); // Prints string & integer
    printf("My name is Madegwa and My age is %d\n", 24);
    printf("%c\n", myName[0]); // Added newline for proper formatting
    printf("%s\n", name); // Prints the entered name

    return 0;
}
