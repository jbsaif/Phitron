#include<stdio.h>
#include<limits.h>
int main()
{
  int n,i;
  scanf("%d", &n);
  int arr[n];
  int pos;
  for(i=0;i<n;i++)
  {
    scanf("%d", &arr[i]);
  }
  
  int lowest = INT_MAX;
  
  for(i=0;i<n;i++)
  {
    if(lowest>arr[i])
    {
      lowest = arr[i];
      pos = i;
    }
  }
      printf("%d %d\n", lowest, pos+1);
  
  return 0;
}