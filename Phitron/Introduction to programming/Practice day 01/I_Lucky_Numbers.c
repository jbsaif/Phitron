#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int mod = n%10;
    int first = n/10;
    if(mod%first==0|| first%mod==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}