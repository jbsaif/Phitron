#include <stdio.h>
int main()
{
    int arr[5000];
    // scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    // printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
    
    for(int i=0;i<5000;i++)
    {
      scanf("%d", &arr[i]);
    }
    
    for(int i=0;i<=4;i++)
    {
      printf("%d\n", arr[i]);
    }
    
    
    return 0;
}