#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min = INT_MAX;
    int max = INT_MIN;
    int max_idx = -1, min_idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_idx = i;
        }
        if (a[i] < min)
        {
            min = a[i];
            min_idx = i;
        }
    }

    int temp = a[max_idx];
    a[max_idx] = a[min_idx];
    a[min_idx] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}