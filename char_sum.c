#include<stdio.h>
int main()
{
	char str[26],*ptr;
	
	
	scanf("%s",str);
	ptr=str;
	
	while(*ptr!='\0')
	{
		*ptr=*ptr-('a'-7);
		atoi(ptr);
		printf(" %d",*ptr);
		*ptr++;
		
	}
}
