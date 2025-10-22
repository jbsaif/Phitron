#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s1[101], s2[101];
        scanf("%s %s", &s1, &s2);

        int size = strlen(s2);

        for (int i = 0; i <= size; i++)
        {
            s1[i] = s2[i];
        }

        printf("%s %s\n", s1, s2);
    }

    return 0;
}