#include<stdio.h>

void print_n(int n)
{
    for(int i=1; i<=n; i++)
    {
        printf("%d", i);
        if(i==n){
            continue;
        }
        printf(" ");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    print_n(n);
    return 0;
}