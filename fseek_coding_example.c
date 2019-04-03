//a C program to demonstrate use of fseek,ftell and rewind functions
#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("abc.txt","a+");										//for opening a file
	
	fseek(fp,5,0);				//0 means pointer position is on beginning of the file,
								//from this statement pointer position is skipped 
								//1 bytes from the beginning of the file.
	
	
	rewind(fp);											//sets the file pointer to beinning of the file
	fprintf(fp,"BELIeVER process!\n");
	ftell(fp);				//tells the pointer current position
	fclose(fp);	//close the file
	
	
}
