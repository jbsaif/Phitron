#include<stdio.h>
#include<math.h>

int my_abs(int a)
{
    int val = abs(a);
    return val;
}

int main(){
    int a;
    scanf("%d", &a);
    int ans = my_abs(a);
    printf("%d\n", ans);
    return 0;
}