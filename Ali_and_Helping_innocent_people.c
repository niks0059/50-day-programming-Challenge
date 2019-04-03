#include<stdio.h>
#include<string.h>											//two cases failed 11B242-73 and 13X357-22
#include<stdlib.h>											
															//check for this case.
int main()
{
	char arr[10],*ptr;
	int len,i,temp=0,sum=0,val1,val2;
	
	scanf("%s",arr);
	

	len=strlen(arr);
	atoi(arr);
	if(len<10)
	{
		for(i=0;arr[i]!='\0';i++)
		{
			if((i!=2) && (i!=6))
			{
				val1=atoi(arr+i);
				printf("%d",val1);
				val2=atoi(arr+i+1);
				temp=val1+val2;
				if(temp%2!=0)
				{
					printf("invalid\n");
					exit(0);
				}
				else
				{
					sum=sum+temp;
					continue;
				}
			}
			else
				continue;
		}
		printf("%d\n",sum);
		
		if(sum%2==0)
			printf("valid\n");
		else
			printf("invalid\n");
	}
	else
		exit(0);
return 0;
}
