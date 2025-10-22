#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    scanf("%s", &s);

    int flag = 1;

    int size = strlen(s);

    for(int i = 0,j=size-1; i<j; i++,j--)
    {
        if(s[i]!=s[j]){
            flag = 0;
            break;
        }
    }

    if(!flag){
        printf("NO\n");
    }
    else{
        
        printf("YES\n");
    }

    return 0;
}