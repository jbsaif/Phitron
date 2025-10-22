#include<stdio.h>
int main(){
    char str[100001];
    scanf("%s", &str);

    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>=92 && str[i]<=122){
            printf("%c", str[i]-32);
        }
        if(str[i]==44){
            printf(" ");
        }
        if(str[i]>=65 && str[i]<=90){
            printf("%c", str[i]+32);
        }
    }
    return 0;
}