#include<stdio.h>
int main(){
    long long int a,b,c,d,res;
    scanf("%lld %lld %lld %lld", &a,&b,&c,&d);
    res = (a*b)-(c*d);
    printf("Difference = %lld\n", res);
    return 0;
}