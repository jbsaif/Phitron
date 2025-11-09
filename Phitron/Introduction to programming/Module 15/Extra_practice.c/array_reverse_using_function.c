#include<stdio.h>

void reverse_array(int a[], int n)
{
    printf("Before Reversing: \n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nAfter Reversing: \n");

    for(int i=0, j = n-1; i<j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp ; 
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    reverse_array(a,n);

    return 0;
}