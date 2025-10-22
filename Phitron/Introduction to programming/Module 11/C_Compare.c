#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    char str1[21],str2[21];
    scanf("%s", &str1);
    scanf("%s", &str2);

    int i=0;
    while(true){
        if(str1[i]=='\0' && str2[i]=='\0'){
            printf("%s", str1);
            break;
        }
        else if(str1[i]=='\0'){
            printf("%s", str1);
            break;
        }
        else if(str2[i]=='\0'){
            printf("%s", str2);
            break;
        }
        else if(str1[i]>str2[i]){
            printf("%s", str2);
            break;
        }
        else if(str2[i]>str1[i]){
            printf("%s", str1);
            break;
        }else{
            i++;
        }
    }

    return 0;
}