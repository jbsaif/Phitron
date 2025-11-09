#include<stdio.h>
int main(){
    int x = 5;
    printf("Value of X: %d\n", x);
    printf("Address of X: %p\n", &x);

    int* ptr;
    ptr = &x;

    *ptr = 101; //ptr er variable er adress theke value te giye value er man change kora

    printf("Dereference Value of X: %d\n", x);
    printf("Dereference Value of X: %d\n", *ptr);


    return 0;
}