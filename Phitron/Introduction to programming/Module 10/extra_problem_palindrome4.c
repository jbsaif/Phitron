#include<stdio.h>
#include<string.h>
int main(){
    char str[1001];
    scanf("%s", &str);
    int i,j;
    // int count = 0;
    int flag = 1;
    // for(i=0; str[i]!='\0'; i++)
    // {
    //     count++;
    // }
    int size = strlen(str);
    for(i=0,j=size-1; i<j;i++,j--)
    {
        if(str[i]!=str[j]){
            flag = 0;
        }
    }
    if(!flag)
    {
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    return 0;
}