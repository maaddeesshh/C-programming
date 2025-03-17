#include <stdio.h>

// Function that returns an integer
int getNumber() {
    return 42;
}

int main() {
    int num = getNumber();  // Function call
    printf("The number is %d\n", num);
    return 0;
}
