#include <stdio.h>

int main() {
    int n;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n]; // Declare an integer array

    // Get user input for the array
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]); // Store input in the array
    }

    // Print the stored numbers
    printf("\nYou entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]); // Print each number
    }
    
    printf("\n"); // New line for better formatting
    return 0;
}
