#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    bool is_diagonal = true;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i != j) // diagonal er baire
                {
                    if (arr[i][j] != 0) // value check if not zero
                    {
                        is_diagonal = false;
                        break;
                    }
                }
            }
        }
        if (is_diagonal == true)
        {
            printf("This is a primary Diagonal\n");
        }
        else
        {
            printf("This is not a Primary Diagonal\n");
        }
    }
    else
    {
        printf("This is not a Primary Diagonal Matri\n");
    }

    return 0;
}