// #include<stdio.h>
// int main(){
//      while(1){
//         int x;
//         scanf("%d", &x);
//         if(x==1999){
//             printf("Correct\n");
//             break;
//         }else{
//             printf("Wrong\n");
//         }
//      }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int pass;
//     while (scanf("%d", &pass) != EOF) //jotokkhon na end of file er soman hocche
//     {
//         if(pass==1999){
//             printf("Correct\n");
//             break;
//         }
//         else{
//             printf("Wrong\n");
//         }
//     }
    

//     return 0;
// }

#include<stdio.h>
int main(){
    int pass;
    //no need to initialize
    //no need to increment or decrement
    for ( ; scanf("%d", &pass) != EOF; ) //jotokkhon na end of file er soman hocche
    {
        if(pass==1999){
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }
    

    return 0;
}