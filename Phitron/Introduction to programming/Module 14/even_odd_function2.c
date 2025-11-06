// return + no parameter

int even_odd()
{
    int a;
    scanf("%d", &a);
    if(a%2==0)
    {
        return 1;
    }else{
        return 2;
    }
}

#include<stdio.h>
int main(){
    int res = even_odd();
    if(res == 1)
    {
        printf("Even\n");
    }else{
        printf("Odd\n");
    }
    return 0;
}