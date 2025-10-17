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
    
    int indeX, Value;
    scanf("%d %d", &indeX, &Value);
    
    for(int i=0;i<n; i++)
    {
      arr[indeX] = Value;
    }
    
    for(int i=n-1;i>=0; i--)
    {
      printf("%d ", arr[i]);
    }
    
    return 0;
}