//return + paramete

int even(int a)
{
    if(a%2==0) {
        return 1;
    }
    else{
        return 2;
    }
}

#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int ans = even(a);
    if(ans == 1)
    {
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
    return 0;
}