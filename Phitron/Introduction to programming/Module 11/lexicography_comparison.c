#include<stdio.h>
#include<stdbool.h>
int main(){
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int i=0;

    //shorter string is considered to come first
    while(true){
        if(a[i]=='\0' && b[i]=='\0'){
            // printf("Equal");
            printf("%s\n",a);
            printf("%s\n",b);
            break;
        }
        else if(a[i]=='\0'){
            // printf("A is smaller");
            printf("%s\n",a);
            printf("%s\n",b);
            break;
        }
        else if(b[i]=='\0')
        {
            // printf("B is smaller");
            printf("%s\n",b);
            printf("%s\n",a);
            break;
        }
        else if(a[i]>b[i]){
            // printf("B is smaller");
            printf("%s\n",b);
            printf("%s\n",a);
            break;
        }
        else if(b[i]>a[i]){
            // printf("A is smaller");
            printf("%s\n",a);
            printf("%s\n",b);
            break;
        }
        else{
            i++;
        }
    }

    return 0;
}