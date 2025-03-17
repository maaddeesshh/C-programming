#include <stdio.h>

// Function Declaration
int multiply(int, int); // sort of prototyping

int main() {
    int result = multiply(5, 4);  // Function Call
    printf("Result: %d\n", result);
    return 0;
}

// Function Definition
int multiply(int x, int y) {
    return x * y;
}
