#include<stdio.h>
int main()
{
    //issue
    int i=1;
    while(i<=10)
    {
        printf("%d\n", i);
        if(i==10){
            continue;
        }
        i++;
    }

    return 0;
}