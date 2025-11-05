#include <stdio.h>
int main()
{
    int n;
    scanf("%d ", &n);
    
    char str[1001];
    
    for(int i=0; i<n; i++)
    {
      scanf("%c", &str[i]);
    }
    
    int sum = 0;
    for(int i=0; i<n; i++)
    {
      // printf("%d", str[i]-48);
      sum+=str[i]-48;
    }
    
    
    if(sum%3==0){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
    return 0;
}