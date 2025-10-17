#include<stdio.h>
#include<limits.h>
int main()
{
  int n,i;
  scanf("%d", &n);
  int arr[n];
  
  for(i=0;i<n;i++)
  {
    scanf("%d", &arr[i]);
  }
  
  int lowest = INT_MAX;
  
  for(i=0;i<n;i++)
  {
    if(arr[i]>10){
      continue;
    }
    else{
      printf("A[%d] = %d\n",i, arr[i]);
    }
  }
  
  return 0;
}