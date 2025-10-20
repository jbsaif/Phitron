#include <stdio.h>
int main()
{
    char str[100];
    for(int i=0; i<7; i++)
    {
      scanf("%c", &str[i]);
    }
    
    for(int i=0; i<7; i++)
    {
      printf("%c\n", str[i]);
    }
    
    return 0;
}