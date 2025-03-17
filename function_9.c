#include <stdio.h>

// Function with pointer parameter
void modify(int *x) {
    *x = 100;  // Changing the value at the memory address
}

int main() {
    int num = 10;
    modify(&num);// pass by reference
    printf("Value after function call: %d\n", num);
    return 0;
}
