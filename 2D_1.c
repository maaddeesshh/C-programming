#include <stdio.h>

int main() {
    // Initializing a 2D array
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Printing the 2D array
    printf("2D Array Elements:\n");
    for(int i = 0; i < 3; i++) { // Loop through rows
        for(int j = 0; j < 3; j++) { // Loop through columns
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}
