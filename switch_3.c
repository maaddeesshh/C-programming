#include <stdio.h>

int main() {
    char grade;

    // Prompt user for grade input
    printf("Enter your grade (A, B, C, D, E, F): ");
    scanf(" %c", &grade); // Space before %c prevents newline issues

    // Convert to uppercase in case user enters lowercase
    if (grade >= 'a' && grade <= 'f') {
        grade -= 32;  // Convert lowercase to uppercase
    }

    // Use switch statement to provide feedback
    switch (grade) {
        case 'A':
            printf("Excellent! Keep up the great work.\n");
            break;
        case 'B':
            printf("Very Good! You're doing well.\n");
            break;
        case 'C':
            printf("Good! There's room for improvement.\n");
            break;
        case 'D':
            printf("Satisfactory. Try to work harder.\n");
            break;
        case 'E':
            printf("Needs Improvement. Study harder next time.\n");
            break;
        case 'F':
            printf("Fail. Don't give up, keep trying!\n");
            break;
        default:
            printf("Invalid grade! Please enter A, B, C, D, E, or F.\n");
    }

    return 0;
}
