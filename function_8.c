#include <stdio.h>

void modify(int x) {
    x = 100;
}

int main() {
    int num = 10;// local variable to main function
    modify(num);// call by value
    printf("Value after function call: %d\n", num);
    return 0;
}
