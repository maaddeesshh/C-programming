#include <stdio.h>

int main() {
    int matrix[2][3];  // 2 rows, 3 columns

    // Taking input from the user
    printf("Enter 6 numbers:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Printing the entered matrix
    printf("You entered:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
