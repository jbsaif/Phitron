#include<stdio.h>
int main()
{
    long long int a;
    scanf("%lld", &a);
    if(a>0)
    {
        printf("The number is positive\n");
    }
    else{
        printf("The number is negative\n");
    }
    return 0;
}