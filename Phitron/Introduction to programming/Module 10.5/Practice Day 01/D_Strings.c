#include<stdio.h>
#include<string.h>
int main(){
    char s1[11];
    char s2[11];

    scanf("%s", &s1);
    scanf("%s", &s2);

    int size_of_s1 = strlen(s1);
    int size_of_s2 = strlen(s2);

    printf("%d %d\n", size_of_s1, size_of_s2);
    printf("%s%s\n", s1,s2);
    
    char t;
    t = s1[0];
    s1[0] = s2[0];
    s2[0] = t;

    printf("%s %s\n", s1,s2);

    return 0;
}