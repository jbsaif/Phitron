#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int start = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++) // line printing
    {
        for (int k = space; k >= 1; k--) //space printing
        {
            printf(" ");
        }
        space--;

        for (int j = 1; j <= start; j++) // number printing
        {
            printf("%d ", j);
        }
        start++;
        printf("\n");
    }

    return 0;
}