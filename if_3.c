#include <stdio.h>

// Function to return the maximum of two numbers
int findMax(int a, int b) {
    int result;
    if (a > b){
        result= a;
    }else{
        result=b;
    }
    return result;
}

int main() {
    
    printf("The maximum number is: %d\n", findMax(29,40));

    return 0;
}
