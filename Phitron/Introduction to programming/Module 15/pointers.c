#include<stdio.h>
int main(){
    int x = 10;
    printf("%d\n", x);
    printf("%p\n", &x); //address use korte %p use kori

    int* ptr;
    ptr = &x;
    printf("%p\n", ptr); //ptr er moddhe x er adress
    printf("%p\n", &ptr); //ptr er alada address
    return 0;
}