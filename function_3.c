#include <stdio.h>

// Function with parameters
void greetUser(char name[]) {
    printf("Hello, %s! Welcome to C programming.\n", name);
}

int main() {
    greetUser("Eugene");
    return 0;
}
