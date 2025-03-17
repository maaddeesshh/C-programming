#include <stdio.h>
 int findMax(int a, int b, int c)
 {
   
    if(a > b && a>c)
    {
        return a;
    } else if(b>a && b>c){
        return b;
    }else{
        return c;
    }
    
 }
 int main()
 {
    int x;
    int y;
    int z;
    int max;
    printf("Enter value 1: ");
    scanf("%d", &x);
    printf("Enter value 2: ");
    scanf("%d", &y);
    printf("Enter value 3: ");
    scanf("%d", &z);
    max = findMax(x, y, z);
    printf( "the maximum value is %d", max);
    return 0;
 }