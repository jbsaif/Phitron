#include<stdio.h>
#include<string.h>

int my_len(char s[])
{

    int count = 0;

    for(int i=0; s[i]!='\0'; i++)
    {
        count++;
    }

    return count;
}

int main(){
    char s[101];
    scanf("%s", s);
    int count = my_len(s);
    printf("%d\n", count);
    return 0;
}