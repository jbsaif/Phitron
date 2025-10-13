#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int j = 1; j <= t; j++)
    {
        int n, m;
        int sum = 0;
        scanf("%d %d", &n, &m);
        if (n > m)
        {
            int temp;
            temp = n;
            n = m;
            m = temp;
        }
        if (n % 2 != 0)
        {
            n++;
        }
        for (int i = n; i < m; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}