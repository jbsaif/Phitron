#include<stdio.h>
int main(){
    int sz;
    int flag = 1;
    scanf("%d", &sz);

    int a[sz];

    for(int i=0; i<sz ; i++)
    {
        scanf("%d", &a[i]);
    }

    int b[sz];

    for(int i=0; i<sz; i++)
    {
        b[i] = a[sz-i-1];
    }

    for(int i=0; i<sz; i++)
    {
        if(a[i]!=b[i]){
            flag = 0;
            break;
        }
    }

    if(!flag){
        printf("NO\n");
    }else{
        printf("YES\n");
    }

    return 0;
}