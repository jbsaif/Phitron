#include <stdio.h>
int main()
{
    char str[100];
    scanf("%s", &str);
    printf("%s\n", str);
    printf("%d\n", str[7]); //null char = 0
    printf("%d", str[8]); //garbage value character = 12324344
    
    return 0;
}