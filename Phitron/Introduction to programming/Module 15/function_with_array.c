#include <stdio.h>

void fun(int a[])
{
    // a[1] = 100;

    // printf("Fun function address: %p\n", a); //same address, ekhan theke main function er array access korteche
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    fun(a); //by default pass by reference
    // printf("Main function address: %p\n", a); //same address

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", a[i]);
    // }
    return 0;
}