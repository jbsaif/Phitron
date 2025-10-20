#include <stdio.h>
int main()
{
    // int a = 10;//20
    // int b = 20;//20
    // a = b;
    // b = a;
    // printf("A = %d\nB = %d\n", a, b);

    // thats why we need to use temp variable

    int a = 10;
    int b = 20;
    int temp = a; // temp = 10
    a = b;        // a = 20
    b = temp;     // b = 10

    printf("A = %d\nB = %d\n", a, b);
    return 0;
}