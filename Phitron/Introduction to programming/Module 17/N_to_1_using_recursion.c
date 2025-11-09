#include<stdio.h>

void recursion(int n)
{
    if(n==101)
    {
        return;
    }

    if(n%2==0)
    {

        printf("%d\n",n);
    }
    recursion(n+1);
}

int main(){
    int n;
    scanf("%d", &n);

    recursion(n);

    return 0;
}