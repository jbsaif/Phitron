#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        char str[101];
        scanf("%s", &str);

        int size = strlen(str);
        if (size <= 10)
        {
            printf("%s\n", str);
        }
        else if (size > 10)
        {
            size = size - 2;
            printf("%c%d%c\n", str[0], size, str[size + 1]);
        }
    }

    return 0;
}