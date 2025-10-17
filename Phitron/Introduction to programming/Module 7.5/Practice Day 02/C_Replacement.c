#include<stdio.h>
int main()
{
  int n,i;
  scanf("%d", &n);
  int arr[n];
  
  for(i=0;i<n;i++)
  {
    scanf("%d", &arr[i]);
  }
  
  for(i=0;i<n;i++)
  {
    if(arr[i]<0){
     while(arr[i]<=1){
       arr[i]++;
     }
    }
    else if(arr[i]>1){
      while(arr[i]>=2)
      {
        arr[i]--;
      }
    }
    printf("%d ", arr[i]);
  }
  
  return 0;
}