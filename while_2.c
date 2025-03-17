#include <stdio.h>

int main() {
    int num;

    printf("Enter a number (0 to exit): ");
    scanf("%d", &num);

    while (num != 0) {  // Loop continues until user enters 0
        printf("You entered: %d\n", num);
        printf("Enter another number (0 to exit): ");
        scanf("%d", &num);
    }

    printf("Program exited!\n");

    return 0;
}
