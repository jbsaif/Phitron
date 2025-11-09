#include<stdio.h>

    
void reverse_print(int n)
{
    if(n==0)
    {
        return;
    }

    if(n==1)
    {
        printf("%d", n);
        return;
    }

    printf("%d ", n);
    reverse_print(n-1);

}

int main(){
    int n;
    scanf("%d", &n);
    reverse_print(n);
    return 0;
}