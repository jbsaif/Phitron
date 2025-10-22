#include<stdio.h>
int main(){
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int count = 0;
    
    for(int i=0; b[i]!='\0'; i++)
    {
        count++;
    }

    for(int i=0; i<=count; i++)// string b er null character o nibo
    { // jate string a te null er por ar word print na hoy
        a[i] = b[i];
    }

    printf("%s ", a);
    printf("%s", b);

    return 0;
}