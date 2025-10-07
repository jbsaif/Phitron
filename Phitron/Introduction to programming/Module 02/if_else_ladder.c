#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if(tk >= 100)
    {
        printf("Burger khabo\n");
    }
    // if(tk>=50){
    //     printf("Fuchka khabo\n");
    // }
    /* else if er jekono ekta true hole jekono ekta execute hobe
    ar kichu check korbe na*/
    // if er check korbe duita true hole duitai execute hobe
    else if(tk >= 50)
    {
        printf("Fuchka Khabo\n");
    }
    else if(tk >= 20){
        printf("Chips khabo\n");
    }
    else{
        printf("Kichui khabo na\n");
    }

    return 0;
}