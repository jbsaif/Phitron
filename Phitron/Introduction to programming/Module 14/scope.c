#include<stdio.h>
int x=10; // global variable
void sum()
{
    int y = 5;//local for sum function only
    printf("Global From Sum -> %d\n", x);
    printf("Local From Sum -> %d\n", y);
}

int main(){

    sum();
    printf("From main -> %d\n", x);
    // printf("From main -> %d\n", y); //cant access y from main cause y is local variable
    for(int i=0; i<10; i++)
    {
        printf("%d\n", i); // local variable i
    }
    // printf("%d\n", i); // cant access i outside declared block
    return 0;
}