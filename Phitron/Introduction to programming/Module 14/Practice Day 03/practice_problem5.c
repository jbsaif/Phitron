#include<stdio.h>

char capital_to_small(char chh)
{
    if(chh>='A' && chh<='Z')
    {
        return chh + 32;
    }
}

int main(){
    char ch;
    scanf("%c", &ch);

    char res = capital_to_small(ch);
    printf("%c", res);
    return 0;
}