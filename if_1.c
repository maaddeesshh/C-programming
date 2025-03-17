#include <stdio.h>

// Function to return the maximum of two numbers
int findMax(int a, int b) {
    int max;  // Declare max inside the function

    if (a > b)
        max = a;  // Assign 'a' to max if it's greater
    else
        max = b;  // Otherwise, assign 'b' to max

    return max;  // Return the maximum value
}

int main() {
    int num1, num2;

    // Getting input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the function and print the result directly
    printf("The maximum number is: %d\n", findMax(num1, num2));

    return 0;
}
