#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    //first array
    for(int i=0; i<n; i++)
    {
      scanf("%d", &arr[i]);
    }
    
    int count = 0;
    
    for(int i=0; i<n; i++){
      for(int j=1; j<n; j++){
        if(arr[i]%2==0 && arr[j]%2!=0 || arr[i]%2!=0 && arr[j]%2==0){
          
          count++;
        }
        // }
        // else if(arr[i]%2!=0 && arr[j]%2!=0){
        //   continue;
        // }
        // else{
        //   count++;
        // }
      }
    }
    
    printf("%d\n", count);
    
    
    return 0;
}