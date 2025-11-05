#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    int arr[n];

    int i;
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int freq[100001]={0};

    for(i=0; i<n; i++){
        int val = arr[i];
        freq[val]++;
    }

    for(i=1;i<=m; i++)
    {
        printf("%d\n", freq[i]);
    }

    return 0;
}