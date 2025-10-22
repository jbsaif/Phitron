#include<stdio.h>
int main(){
    char a[101],b[101];
    scanf("%s %s", a,b);

    int length_a=0;
    int length_b=0;

    for(int i=0; a[i]!='\0'; i++)
    {
        length_a++;
    }
    for(int i=0; b[i]!='\0'; i++)
    {
        length_b++;
    }

    for(int i=0;i<=length_b; i++) //null char shoho nibo taile <=
    {
        a[i+length_a] = b[i];
    }

    printf("%s %s",a,b);

    return 0;
}