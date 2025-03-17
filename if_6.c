#include <stdio.h>

int main() {
    char operation;
    double num1, num2, result;

    // Displaying options to user
    printf("Simple Calculator\n");
    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operation);  // Space before %c to ignore whitespace

    // Taking input for two numbers
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Performing calculations using if-else conditions
    if (operation == '+') {
        result = num1 + num2;
        printf("Result: %f + %f = %f\n", num1, num2, result);
    } else if (operation == '-') {
        result = num1 - num2;
        printf("Result: %f - %f = %f\n", num1, num2, result);
    } else if (operation == '*') {
        result = num1 * num2;
        printf("Result: %f * %f = %f\n", num1, num2, result);
    } else if (operation == '/') {
        if (num2 != 0) { // Avoid division by zero
            result = num1 / num2;
            printf("Result: %f / %f = %f\n", num1, num2, result);
        } else {
            printf("Error! Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid operation! Please use +, -, *, or /.\n");
    }

    return 0;
}
