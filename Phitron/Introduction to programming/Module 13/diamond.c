#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int num = n * 2 / 2; // m=5
    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = space; k >= 1; k--)
        {
            printf(" ");
        }
        space--;
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
    }
    int star2 = n * 2 - 1;
    star2-=2;
    int space2 =1;
    for (int l = 1; l <= num; l++) // printing lines
    {
        for(int p=1; p<=space2;p++)//space
        {
            printf(" ");
        }
        space2++;
        for (int m = star2; m >= 1; m--)//star
        {
            printf("*");
        }
        printf("\n");
        star2-=2;
    }
    return 0;
}