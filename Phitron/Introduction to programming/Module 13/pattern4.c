#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int num = 1;
    int space = n-1;
    for(int i=1; i<=n; i++)
    {
        for(int k=space; k>=1; k--){
            printf(" ");
        }
        space--;
        for(int j = 1; j<=num; j++){
            printf("%d ",j);
        }
        printf("\n");
        num++;
    }
    return 0;
}