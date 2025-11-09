#include<stdio.h>

void reference(int* ptr)
{
    *ptr = 20; // x er adress  theke er value change kortesi
}

int main(){
    int x = 10;
    printf("%d\n", x);
    reference(&x);
    printf("%d\n", x); // x er adress shoho pathanote value change main theke pacchi
    return 0;
}