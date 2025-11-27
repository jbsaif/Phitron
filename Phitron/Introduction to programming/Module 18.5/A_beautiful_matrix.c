#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
  
  int arr[5][5];
  
  for(int i=0; i<5; i++)
  {
    for(int j=0; j<5; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  
  
  int moves = 0;
  for(int i=0; i<5; i++)
  {
    for(int j=0; j<5; j++)
    {
      if(arr[i][j] == 1)
      {
        moves = abs(i-2) + abs(j-2);
      }
    }
  }
  printf("%d\n", moves);
  
  return 0;
}
