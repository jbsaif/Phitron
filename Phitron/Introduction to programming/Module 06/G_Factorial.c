#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int j = 1; j <= t; j++)
    {
        int n;
        long long int fact = 1;
        scanf("%d", &n);
        if (n == 0 && n == 1)
        {
            printf("1\n");
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                fact = fact * i;
            }
        }

        printf("%lld\n", fact);
    }
    return 0;
}