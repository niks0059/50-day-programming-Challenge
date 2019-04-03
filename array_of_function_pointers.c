//program for array of function pointers.
#include<stdio.h>
void add(int a, int b)
{																		//function pointers are mainly used in ivt tables due to less space and linited no of lines for your code.
																		
																		//diff between function and interrupt (ISR CALL BACK)
																		//interrupt does'nt return anything nor accepts 
	int c;
	c=a+b;
}
void (*fun[4])(int x)={add,sub,mul,div};

int main()
{
	int a,b,choice=0,result=0;
	scanf("%d %d",&a,&b);
	result=(*fun[choice])(a,b);
	
}
