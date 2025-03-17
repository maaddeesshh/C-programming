#include <stdio.h>

int main() {
    int numbers[5]; // Declaring an array with 5 elements

    // Getting user input manually for each index
    printf("Enter 5 numbers:\n");

    printf("Element 1: ");
    scanf("%d", &numbers[0]);

    printf("Element 2: ");
    scanf("%d", &numbers[1]);

    printf("Element 3: ");
    scanf("%d", &numbers[2]);

    printf("Element 4: ");
    scanf("%d", &numbers[3]);

    printf("Element 5: ");
    scanf("%d", &numbers[4]);

    // Printing the entered numbers manually
    printf("\nYou entered: %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);// this is the correct way to print the elements in the array

    return 0;
}
// In C, you cannot directly print an entire array using printf("%d", numbers); because an array name (numbers) is actually a memory address (pointer), not the values inside it.
