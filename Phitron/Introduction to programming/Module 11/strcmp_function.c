#include<stdio.h>
#include<string.h>
int main(){
    char str[101], str2[101];
    scanf("%s %s", &str, &str2);

    int val = strcmp(str,str2);

    if(val<0){
        printf("A is smaller");
    }
    else if(val>0){
        printf("B is smaller");
    }
    else if( val == 0)
    {
        printf("Equal");
    }
    return 0;
}