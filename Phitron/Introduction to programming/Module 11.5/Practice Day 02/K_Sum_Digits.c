#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d ", &n);
    char str[1000001];
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%c", &str[i]);
    }
    for(int i=0;i<n;i++){
        sum+=str[i]-'0';

    }
    printf("%d", sum);

    return 0;
}