#include<stdio.h>

// return_type function_name (parameters){
//     body of code
//     return value;
// }

int sub(int a, int b){
    int biyog = a-b;
    return biyog;
}

int sum(int a, int b){
    int jog = a+b;
    return jog;
}
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int z = sum(a,b);
    int z1 = sub(a,b);

    printf("%d %d", z, z1);

    return 0;
}