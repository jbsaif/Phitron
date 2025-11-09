#include<stdio.h>

void print_numbers(int n)
{
    if(n==0)
    {
        return;
    }
    print_numbers(n-1);
    printf("%d\n", n);
}

int main(){
    int n;
    scanf("%d", &n);
    print_numbers(n);
    return 0;
}