#include<stdio.h>

int char_to_ascii(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    if(ch>='A' && ch<='Z')
    {
        return ch;
    }
    if(ch>='0' && ch<='9')
    {
        return ch;
    }
}

int main(){
    char ch;
    scanf("%c", &ch);
    int ans = char_to_ascii(ch);
    printf("%d\n", ans);
    return 0;
}