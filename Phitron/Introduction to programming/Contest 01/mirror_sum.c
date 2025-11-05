#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    int arr1[n];
    int arr2[n];
    
    //first array
    for(int i=0; i<n; i++)
    {
      scanf("%d", &arr1[i]);
    }
    
    for(int i=0;i<n; i++)
    {
      scanf("%d", &arr2[i]);
    }
    
    for(int i=0, j=n-1; i<j; i++,j--)
    {
      int temp = arr2[i];
      arr2[i] = arr2[j];
      arr2[j] = temp;
    }
    
    int sum = 0;
    for(int i=0; i<n; i++)
    {
      sum = arr1[i] + arr2[i];
      printf("%d ", sum);
    }
    
    return 0;
}