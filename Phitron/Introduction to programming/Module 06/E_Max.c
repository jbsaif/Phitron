#include <stdio.h>
#include <limits.h>
int main()
{
    int n, x;
    scanf("%d", &n);
    int max = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if (max < x)
            max = x;//max = 8
    }
    printf("%d\n", max);
    return 0;
}