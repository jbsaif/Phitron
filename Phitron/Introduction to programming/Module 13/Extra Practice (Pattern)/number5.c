#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int start = 1;
    int var = 65;

    for(int i=1; i<=n; i++) //line printing
    {   
        for(int j=1; j<=start; j++) //character printing
        {
            printf("%c ", j+64);
        }
        printf("\n");
        start++;
    }
    return 0;
}