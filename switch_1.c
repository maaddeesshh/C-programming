#include <stdio.h>
#include <math.h>  // Required for pow() function

int main() {
    char operation;
    double num1, num2, result;

    // Display options to user
    printf("Advanced Calculator\n");
    printf("Choose an operation (+, -, *, /, ^, %%): ");
    scanf(" %c", &operation);  // Space before %c to avoid newline issues

    // Taking input for two numbers
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Performing the chosen operation using switch
    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("Result: %f + %f = %f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %f - %f = %f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %f * %f = %f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %f / %f = %f\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
                return 1;
            }
            break;
        case '^':  // Exponentiation
            result = pow(num1, num2);
            printf("Result: %f ^ %f = %f\n", num1, num2, result);
            break;
        case '%':  // Modulus operation (only valid for integers)
            if ((int)num2 != 0) {  // Ensure num2 is not zero
                int modResult = (int)num1 % (int)num2;
                printf("Result: %d %% %d = %d\n", (int)num1, (int)num2, modResult);
            } else {
                printf("Error! Modulus by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Invalid operation! Please use +, -, *, /, ^, or %%.\n");
            return 1;
    }

    return 0;
}
