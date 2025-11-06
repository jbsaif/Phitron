#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int star = n*2-1;
    int space = 1;
    for(int i=0; i<n; i++) //loop for printing lines
    {   
        for(int j=star; j>=1; j--) //for printing stars
        {
            printf("*");
        }
        printf("\n");
        star-=2;

        for(int k=1; k<=space; k++)
        {
            printf(" ");
        }
        space++;
    }

    return 0;
}