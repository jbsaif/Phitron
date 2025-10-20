#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    char t[1001];
    scanf("%s", &s);
    scanf("%s", &t);
    
    int size1 = strlen(s);
    int size2 = strlen(t);

    printf("%d %d\n", size1, size2);
    printf("%s %s\n", s, t);


    return 0;
}