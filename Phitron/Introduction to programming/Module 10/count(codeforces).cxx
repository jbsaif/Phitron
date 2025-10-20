//count codeforces
#include<stdio.h>
int main()
{
	char str[1000001];
	scanf("%s", &str);
	
	int i=0;
	int sum = 0;
	
	while(str[i]!='\0')
	{
	 sum = sum+str[i] - 48;// -48 converts character digit to numerical digit '48' = 0
		i++;
	}
	printf("%d", sum);
	return 0;
	
}