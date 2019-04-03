#include<stdio.h>
int main()
{
	char str[70],*ptr;
	FILE *fp;
	
	fp=fopen("abc.txt","r");
	fscanf(fp,"%s",str);
	printf("1. %s\n",str);
	
	fgets(str, 70, (FILE*)fp);
   	printf("2: %s\n", str );
   
   fgets(str, 70, (FILE*)fp);
   printf("3: %s\n", str );
   
   ptr=fgets(str,70,(FILE*)fp);
   printf("4. %s\n",ptr);
   fclose(fp);
}
