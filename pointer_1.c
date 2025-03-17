#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;  // Pointer stores the address of num

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Address of num: %d\n", *&*&num);
    printf("Pointer ptr stores address: %p\n", ptr);
    printf("Value at the pointer location: %d\n", *ptr);  // Dereferencing

    return 0;
}
