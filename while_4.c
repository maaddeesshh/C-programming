#include <stdio.h>

int main() {
    int num = 5;  // Secret number
    int guess;    

    // First input prompt before the loop
    printf("Guess the number: ");
    scanf("%d", &guess);

    // Loop continues until the user guesses correctly
    while (guess != num) { 
        printf("Wrong guess! Try again: "); 
        scanf("%d", &guess); 
    }

    printf("You win!\n"); 

    return 0; 
}
