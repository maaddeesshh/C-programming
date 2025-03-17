#include <stdio.h>

// Function to return the maximum of two numbers
int findMax(int a, int b) {
    if (a > b)
        return a;  // Return 'a' if it is greater
    else
        return b;  // Otherwise, return 'b'
}

int main() {
    int num1, num2, max;

    // Getting input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the function and store the result
    max = findMax(num1, num2);

    // Print the maximum number
    printf("The maximum number is: %d\n", max);

    return 0;
}
