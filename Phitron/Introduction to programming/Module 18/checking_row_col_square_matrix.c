#include <stdio.h>
int main()
{

    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if(r==1)
    {
        printf("This is a row matrix\n");
    }
    else if(c==1)
    {
        printf("This is a Column matrix\n");
    }
    else if(r==c)
    {
        printf("This is a Square matrix\n");
    }


    return 0;

}