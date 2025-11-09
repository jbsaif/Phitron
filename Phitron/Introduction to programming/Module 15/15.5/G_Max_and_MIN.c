#include<stdio.h>
#include<limits.h>

void minimum(int arr[], int n)
{
    int min = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("%d ", min);
}

void maximum(int arr[], int n)
{
    int max = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("%d", max);
}


int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    minimum(arr,n);
    maximum(arr,n);

    return 0;
}