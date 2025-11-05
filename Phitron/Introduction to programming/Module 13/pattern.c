#include<stdio.h>
int main(){
    // int n;
    // scanf("%d", &n);
    // for(int i=0; i<n; i++) // for printing new line
    // {
    //     for(int j=0; j<=5; j++){ //for printing star
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    //Course Method

    int n, star = 1;
    scanf("%d", &n);
    for(int i=0; i<n; i++) // for printing new line
    {
        for(int j=0; j<star; j++){ //for printing star
            printf("*");
        }
        printf("\n");
        star++;
    }

    // int n;
    // scanf("%d", &n);
    // for(int i=0; i<n; i++) // for printing new line
    // {
    //     for(int j=0; j<=i; j++){ //for printing star
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    return 0;
}