#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    int arr[n];
    
    for(i=0;i<n;i++)
    {
      scanf("%d", &arr[i]);
    }
    
    int pos_sum=0;
    int neg_sum = 0;
    for(i=0; i<n; i++)
    {
      if(arr[i]>0){
        pos_sum+=arr[i];
      }
      else if(arr[i]<0)
      {
        neg_sum+=arr[i];
      }
    }
    
    printf("%d %d\n", pos_sum, neg_sum);
    return 0;
}