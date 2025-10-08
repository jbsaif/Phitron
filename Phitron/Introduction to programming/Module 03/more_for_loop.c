#include <stdio.h>
int main()
{
    int i;
    //     for (i = 1; i <= 100; i = i + 2)// ek theke eksho sokol bijor
    //     {
    //         printf("%d\n",i);
    //     }
    //     int i;

    // for (i = 2; i <= 100; i = i + 2) // ek theke eksho sokol jor
    // {
    //     printf("%d\n", i);
    // }

    // for (i = 4; i <= 100; i = i + 4) // ek theke eksho sokol 4 er gunitok
    // {
    //     printf("%d\n", i);
    // }

    // for (i = 7; i <= 100; i = i + 7) // ek theke eksho sokol 7 er gunitok
    // {
    //     printf("%d\n", i);
    // }

    // for (i = 100; i >= 1; i = i - 1) // eksho theke ek sokol shongkha
    // {
    //     printf("%d\n", i);
    // }

    // for (i = 100; i >= 1; i = i - 2) // eksho theke ek sokol bijor
    // {
    //     printf("%d\n", i);
    // }

    for (i = 2; i <= 64; i*=2) // ek theke eksho sokol jor
    {
        printf("%d\n", i);
    }

    return 0;
}