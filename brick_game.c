#include<stdio.h>
int main()
{
	int num,p,m,temp=0;
	scanf("%d",&num);
	p=1;
	A:if((p+temp)>=num)						//goto stmt.
	{
		printf("Patlu\n");
		return 0;
	}
	else
	{
		m=p*2;
		temp=temp+p+m;
		if(temp>num)
		{
			printf("Motu\n");
			return 0;
		}
	p++;
	goto A;
	}
}
