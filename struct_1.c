#include <stdio.h>

// Define a structure for a student
struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    // Declare a structure variable
    struct Student student1;

    // Assign values to structure members
    printf("Enter student name: ");
    scanf("%s", student1.name);  // No '&' for strings
    printf("Enter age: ");
    scanf("%d", &student1.age);
    printf("Enter grade: ");
    scanf("%f", &student1.grade);

    // Print student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Grade: %.2f\n", student1.grade);

    return 0;
}
