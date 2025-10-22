#include<stdio.h>
#include<string.h>
int main(){
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    strcpy(a,b); //b theke a te copy
    printf("%s %s",a,b);
    return 0;
}