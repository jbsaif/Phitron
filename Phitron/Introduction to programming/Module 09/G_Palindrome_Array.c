#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int palindrome = 1;

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++)
    {
        if(a[i] != a[n-1-i]){
            palindrome = 0;
        }
    }
    if(!palindrome){
        printf("NO\n");
    }else{
        printf("YES\n");
    }

    return 0;
}