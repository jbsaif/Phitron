#include<stdio.h>

void hudai(int x)
{
    x = 20;
    printf("Hudai function Address: %p\n", &x);
}

int main(){
    int x = 10;
    hudai(x);
    printf("%d\n", x); // val pathaisi but change hoy nai
    printf("Main function Address: %p\n", &x); // duita alada
    printf("Duita Address Alada\n"); // duita alada

    //main function e x er value change hoy nai
    return 0;
}