#include <stdio.h>

int main() {
    int num = 5;  // Secret number
    int guess;
    int attempts = 0;
    int max_attempts = 3;

    // First input prompt before the loop
    printf("Guess the number (You have %d attempts): ", max_attempts);
    scanf("%d", &guess);
    attempts++;  // Count first attempt

    // Loop runs while the guess is incorrect and attempts are left
    while (guess != num && attempts < max_attempts) { 
        printf("Wrong guess! Try again (%d attempts left): ", max_attempts - attempts);
        scanf("%d", &guess);
        attempts++; 
    }

    // Check if the user won or lost
    if (guess == num) {
        printf("You win!\n"); 
    } else {
        printf("Game over! The correct number was %d.\n", num);
    }

    return 0; 
}
