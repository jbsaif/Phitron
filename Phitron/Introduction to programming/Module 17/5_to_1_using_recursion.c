#include<stdio.h>

void reverse_print(int i)
{

    if(i==0) // end condition
    {
        return;
    }

    printf("%d\n", i);
    reverse_print(i-1); //increment/ decrement
}

int main(){
    int i=5; // initialize
    reverse_print(i); //starting
    return 0;
}

// for(int i=5;      i>0         ;  i++)
    // starting     end condition      incre/decre