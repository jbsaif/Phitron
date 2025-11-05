#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = n * 2 - 1;
    int space = 1;
    for (int i = 1; i <= n; i++) // printing lines
    {
        for (int j = star; j >= 1; j--) // printing stars
        {
            printf("*");
        }
        printf("\n");
        for (int k = 1; k <= space; k++) //space printing
        {
            printf(" ");
        }
        star -= 2;
        space++;
    }
    return 0;
}