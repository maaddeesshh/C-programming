#include <stdio.h>

int main() {
    int num;

    // First input prompt
    printf("Enter a positive number: ");
    scanf("%d", &num);

    // Loop to keep taking input while num is positive
    while (num >= 0) {
        printf("You entered: %d\n", num);

        // Ask for a new number inside the loop
        printf("Enter another number (negative to stop): ");
        scanf("%d", &num);
    }

    printf("You entered a negative number. Program exited.\n");

    return 0; 
}

