#include<stdio.h>

char small_to_capital(char ch)
{
    if(ch>='a' && ch <='z')
    {
        return ch-32;
    }
}

int main(){
    char ch;
    scanf("%c", &ch);

    char ans = small_to_capital(ch);

    printf("%c", ans);
    return 0;
}