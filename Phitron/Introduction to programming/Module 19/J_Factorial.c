#include <stdio.h>
long long int rec(int n)
{
  if(n == 1)
  {
    return 1;
  }
  
  long long int fact = rec(n-1);
  return n*fact;
  
}

int main()
{
    
      int n;
      scanf("%d", &n);
      long long int res = rec(n);
      printf("%d\n", res);
}