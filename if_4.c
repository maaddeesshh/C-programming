 #include <stdio.h>
 int findMax(int a, int b, int c)
 {
    int max;
    if(a > b && a>c)
    {
        max = a;
    } else if(b>a && b>c){
        max = b;
    }else{
        max = c;
    }
    return max;
 }
 int main()
 {
    int x;
    int y;
    int z;
    printf("Enter value 1: ");
    scanf("%d", &x);
    printf("Enter value 2: ");
    scanf("%d", &y);
    printf("Enter value 3: ");
    scanf("%d", &z);
    printf( "the maximum value is %d", findMax(x, y, z));
    return 0;
 }