#include<stdio.h>
int main(){
    int a[5] = {10,20,30,40,50};
    // printf("Array 0th index: %p\n", &a[0]);
    // printf("Array pointer Adress: %p\n", a);
    // printf("Both are Same\nTaile array is a pointer jar moddhe Oth index er adres thake\n");

    // *a = 100;
    *(a+2) = 100;

    for(int i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }


    return 0;
}