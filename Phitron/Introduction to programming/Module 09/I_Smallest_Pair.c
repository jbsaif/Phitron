#include <stdio.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n+1];
        int res = 0;
        int minVal = INT_MAX;

        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 1; i < n; i++)
        {
            for (int j = i+1; j <= n; j++)
            {
                res = a[i] + a[j] + j - i;
                if (minVal > res)
                {
                    minVal = res;
                }
            }
        }
        printf("%d\n", minVal);
    }

    return 0;
}