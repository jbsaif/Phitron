#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int space = n - 1;
    int star = 1;

    for (int i = 1; i <= n; i++) // printing for line
    {

        for (int k = space; k >= 1; k--)
        {
            printf(" ");
        }

        space--;

        for (int j = 1; j <= star; j++) // for printing stars
        {
            printf("*");
        }
        printf("\n");
        star += 2;
    }

    int star2 = n * 2 - 1;
    int space2 = 1;
    for(int i = 1; i<=n; i++) //printing lines
    {
        for(int j=star2; j>=1; j--)
        {
            printf("*");
        }
        printf("\n");
        star2-=2;
        for(int k = 1; k<=space2; k++)
        {
            printf(" ");
        }
        space2++;
    }

    return 0;
}