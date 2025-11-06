#include<stdio.h>
int sum(int a, int b)
{
    int res = a+b;
    return res;
}

int main(){
    printf("%d\n", sum(5,6)); //ekhane ar return value catch korar jonno variable dorkar nai
    return 0;
}