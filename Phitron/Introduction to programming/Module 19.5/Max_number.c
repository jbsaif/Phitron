#include <stdio.h>
#include <limits.h>

int max = INT_MIN;
void maxnumber(int a[], int n, int i)
{
  if(i==n)
  {
    return;
  }
  
  maxnumber(a,n, i+1);
  
  if(a[i] > max)
  {
    max = a[i];
  }
  
}

int main()
{
  int n;
  scanf("%d", &n);
  
  int a[n];
  
  for(int i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
  }
  
  maxnumber(a,n, 0);
  printf("%d\n", max);
  
  return 0;
}
