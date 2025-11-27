#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
  int n;
  scanf("%d", &n);
  int original = n;
  int is_lucky = true;
  
  if(n==0)
  {
    printf("NO\n");
    return 0;
  }
  
  while(n!=0)
  {
    int last = n%10;
    if(last != 4 && last != 7)
    {
      is_lucky = false;
      break;
    }
     n = n/10;
  }
  
  if(is_lucky == true)
  {
    printf("YES\n");
  }
  else if(original%4 == 0 || original%7 == 0)
  {
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }
  
  return 0;
}
