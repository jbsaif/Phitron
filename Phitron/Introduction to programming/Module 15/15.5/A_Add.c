#include<stdio.h>

int sum(int a, int b)
{
    int ans = a+b;
    return ans;
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int res = sum(a,b);
    printf("%d\n", res);
    return 0;
}