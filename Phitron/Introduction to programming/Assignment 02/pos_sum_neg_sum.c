#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    
    int pos_sum = 0;
    int neg_sum = 0;
    
    for(int i=0; i<n; i++)
    {
      scanf("%d", &arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
      if(arr[i]>0){
        pos_sum+=arr[i];
      }
      else if(arr[i]<0)
      {
        neg_sum+=arr[i];
      }
    }
    
    printf("pos_sum = %d\n", pos_sum);
    printf("neg_sum = %d\n", neg_sum);
    
    return 0;
}