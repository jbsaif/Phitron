#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);

    int sum = 0;

    for(int i=0;i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            sum = a[i]+a[j];
            if(sum==x)
            {
                printf("Value X was found\n");
                printf("At index a[i][j] = a[%d][%d]\n", i,j);
            }
        }
    }
    return 0;
}