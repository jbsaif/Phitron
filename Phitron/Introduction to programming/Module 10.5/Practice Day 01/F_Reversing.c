#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    //using two pointers technique

    for(int i=0, j=n-1; i<j; i++, j--) //swap manei temp use korbo lol
    {
        int t;
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }


    return 0;
}