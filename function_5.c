#include <stdio.h>

// Function to add two numbers
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int sum = addNumbers(10, 20);  // Function call
    printf("Sum is %d\n", sum);
    return 0;
}
