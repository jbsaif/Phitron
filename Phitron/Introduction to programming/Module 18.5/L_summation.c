#include<stdio.h>

void sum(int arr[], int n, int i, int res)
{
  
  
  if(i==n)
  {
    printf("%d\n", res);
    return;
  }
  res+=arr[i];
  sum(arr,n,i+1,res);
}

int main()
{
  int n;
  scanf("%d", &n);
  
  int arr[n];
  
  for(int i=0; i<n; i++)
  {
    scanf("%d", &arr[i]);
  }
  
  
  sum(arr,n,0,0);
  
  return 0;
}