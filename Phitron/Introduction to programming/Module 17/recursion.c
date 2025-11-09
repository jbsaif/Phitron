#include<stdio.h>

void hello() //recusive function
{
    printf("Hi\n");
    hello(); //recursion
}

int main(){
    hello();
    return 0;
}