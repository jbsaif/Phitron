#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n-1;
    for(int i=1; i<=n; i++){//for line printing

        for(int k=space; k>=1; k--){
            printf(" ");
        }

        space--;
        
        for(int j=1; j<=star; j++)//for star printing
        {
            printf("*");
        }
        printf("\n");
        star+=2;
    }
    return 0;
}