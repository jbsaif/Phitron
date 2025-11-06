// no return + parameter

void even_odd(int x)
{
    if(x%2==0)
    {
        printf("Even\n");
    }else{
        printf("Odd\n");
    }
}

#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    even_odd(a);
    return 0;
}