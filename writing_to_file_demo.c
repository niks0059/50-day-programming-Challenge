#include<stdio.h>
int main()
{
	FILE* fp;
	FILE* rp;
	fp=fopen("abc.txt","w+");
	fprintf(fp,"hey folks! this is fprintf demo\n");
	fputs("fputs demo here!\n",fp);
	fclose(fp);
	
	rp=fopen("abc.txt","a+");
	fprintf(rp,"this is nikhil learning file systems in c\n");
	fclose(rp);
}
