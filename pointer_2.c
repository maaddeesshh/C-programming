#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr;  // Pointer to the first element of arr

    printf("First element: %d\n", *ptr);
    ptr++;  // Move to the next element
    printf("Second element: %d\n", *ptr);
    ptr++;  // Move to the next element
    printf("Third element: %d\n", *ptr);

    return 0;
}
