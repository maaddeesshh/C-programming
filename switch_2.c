#include <stdio.h>

int main() {
    int marks;
    char grade;

    // Getting student marks
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    // Checking for valid marks range
    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter a number between 0 and 100.\n");
        return 1;  // Exit program with error code
    }

    // Determine the grade based on marks
    if (marks >= 90)
        grade = 'A';
    else if (marks >= 80)
        grade = 'B';
    else if (marks >= 70)
        grade = 'C';
    else if (marks >= 60)
        grade = 'D';
    else if (marks >= 50)
        grade = 'E';
    else
        grade = 'F';

    // Use switch statement for output based on grade
    switch (grade) {
        case 'A':
            printf("Your grade is: A (Excellent!)\n");
            break;
        case 'B':
            printf("Your grade is: B (Very Good!)\n");
            break;
        case 'C':
            printf("Your grade is: C (Good!)\n");
            break;
        case 'D':
            printf("Your grade is: D (Satisfactory)\n");
            break;
        case 'E':
            printf("Your grade is: E (Needs Improvement)\n");
            break;
        case 'F':
            printf("Your grade is: F (Fail)\n");
            break;
        default:
            printf("Error in grade calculation!\n");
    }

    return 0;
}
