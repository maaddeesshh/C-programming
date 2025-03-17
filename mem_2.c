#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};

    for(int i = 0; i < 3; i++) {
        printf("arr[%d] value: %d, memory address: %p\n", i, arr[i], &arr[i]);
    }

    return 0;
}
