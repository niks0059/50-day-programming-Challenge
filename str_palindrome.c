#include<stdio.h>
#include<string.h>
#define SIZE 100
int main()
{
	char str1[SIZE],str2[SIZE];
	scanf("%s",str1);

	strcpy(str2,str1);
	strrev(str2);
	
	int a=strcmp(str1,str2);
	if(a==0)	
		printf("YES\n");
	else
		printf("NO\n");	
		
return 0;
}
