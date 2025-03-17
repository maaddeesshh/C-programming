#include <stdio.h>

// Define a structure for an Employee
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    // Initializing structure variables directly (No user input)
    struct Employee emp1 = {"Alice Johnson", 101, 75000.50};
    struct Employee emp2 = {"Bob Smith", 102, 68000.75};
    struct Employee emp3 = {"Charlie Brown", 103, 82000.25};

    // Print employee details
    printf("Employee Details:\n");
    printf("Name: %s, ID: %d, Salary: %.2f\n", emp1.name, emp1.id, emp1.salary);
    printf("Name: %s, ID: %d, Salary: %.2f\n", emp2.name, emp2.id, emp2.salary);
    printf("Name: %s, ID: %d, Salary: %.2f\n", emp3.name, emp3.id, emp3.salary);

    return 0;
}
