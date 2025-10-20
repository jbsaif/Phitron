#include <stdio.h>
int main()
{
    char str[10];
    printf("%d\n", str[7]); //input neyar age string faka
    //tai null character na hoye garbage value roise
    scanf("%s", &str);
    printf("%s\n", str);
    printf("%d\n", str[7]); //null char = 0
    
    return 0;
}