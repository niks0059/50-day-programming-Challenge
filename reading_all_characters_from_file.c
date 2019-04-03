//a program to print all character from an eisting file
#include<stdio.h>
int main()
{
	FILE* fp;
	fp=fopen("abc.txt","r");
	int ch;
	while((ch=fgetc(fp)!= EOF))
	{
		printf("%c ",ch);
	}
}
