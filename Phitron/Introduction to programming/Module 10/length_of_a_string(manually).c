#include<stdio.h>
int main(){
	char str[50];
	scanf("%s", &str);
    int count = 0;
    int i;
    for(i=0; str[i]!='\0'; i++)
    {
    	count++;
    }
	
	printf("%d", count);
	
	return 0;
}