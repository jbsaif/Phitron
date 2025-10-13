#include<stdio.h>
int main(){
    int x,res;
    scanf("%d", &x);
    res = x/1000;
    if(res%2==0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
    
    return 0;
}