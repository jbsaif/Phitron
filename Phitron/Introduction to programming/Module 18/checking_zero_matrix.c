#include <stdio.h>
int main()
{

    int r, c;
    scanf("%d %d", &r, &c);

    int flag = 1;

    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(a[i][j]>0)
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
    {
        printf("This is a zero matrix\n");
    }else{
        printf("This is not a Zero Matrix\n");
    }

    return 0;
}