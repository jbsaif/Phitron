#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x, flag = 0;
    scanf("%d", &x);
    for(int i=0; i<n; i++)
    {
        if(x==arr[i]){
            printf("%d\n", i);
            flag = 1;
            break;
        }
    }
    if(flag!=1)
    {
        printf("-1\n");
    }

    return 0;
}