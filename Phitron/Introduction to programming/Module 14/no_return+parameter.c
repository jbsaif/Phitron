#include<stdio.h>

int sum(int x, int y){
    int ans = x+y;
    // return; function theke jokhon tokhon return korte parbo but value return korte parbo na
    printf("%d\n", ans);
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    sum(a,b);
    // printf("Hellow\n");
    return 0;
}