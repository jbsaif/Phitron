// no return + no parameter

void even_odd()
{
    int a;
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("Even\n");
    }else{
        printf("Odd\n");
    }
}

#include<stdio.h>
int main(){
    even_odd();
    return 0;
}