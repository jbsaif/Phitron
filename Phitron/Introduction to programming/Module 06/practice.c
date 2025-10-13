// #include <stdio.h>
// int main()
// {
//     int x = 10;
//     int y = x++; //y=10,x=11;
//     int z = ++y;//y=11,z=11;
//     printf("%d\n", z++);//11 print z=12;
//     printf("%d\n", z);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int x = 10;
    --x; //9
    printf("%d\n", --x);//8 then print
    x++;
    printf("%d\n", x);
    return 0;
}