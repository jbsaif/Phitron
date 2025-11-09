#include<stdio.h>

void stringprint(char str[])
{
    printf("%s ", str);
    int a = strlen(str);
    printf("%d", a);
}

int main(){
    char str[10];
    scanf("%s", str);
    stringprint(str);
    return 0;
}