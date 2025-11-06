#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int star = n;

    for(int i=1; i<=n; i++) //for line printing
    {
        for(int j = star; j>=1; j--) // star printing
        {
            printf("*");
        }
        printf("\n");
        star--;
    }
    return 0;
}