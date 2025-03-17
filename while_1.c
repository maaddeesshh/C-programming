#include <stdio.h>

int main() {
    int count = 1;

    while (count <= 5) {  // Loop runs while count is <= 5
        printf("Count: %d\n", count);
        count++;  // Increment count to prevent infinite loop
    }

    return 0;
}
