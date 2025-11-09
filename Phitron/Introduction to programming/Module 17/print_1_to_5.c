#include<stdio.h>

void hello(int i)
{
    if(i==6)
    {
        return;
    }

    printf("%d\n", i);
    hello(i+1);
}

int main(){
    int i=1;
    int n;
    // scanf("%d", &n);
    hello(i);
    return 0;
}