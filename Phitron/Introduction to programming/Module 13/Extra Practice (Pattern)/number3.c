#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int star = n;
    int space = 1;

    for (int i = 1; i <= n; i++) // line printing
    {
        for (int j = star; j >= 1; j--) // star printing
        {
            printf("*");
        }
        printf("\n");
        star--;
        for (int k = 1; k <= space; k++)//space printing
        {
            printf(" ");
        }
        space++;
    }

    return 0;
}