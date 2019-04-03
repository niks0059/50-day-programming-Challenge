#include <stdio.h>
#include<string.h>
#define SIZE 100
int main()
{
	int t,test,val,k;
	int length1,length2,i,j;
	char string1[SIZE],string2[SIZE];
	
	
	scanf("%d",&t);
	for(test=0;test<t;test++)
	{
	
		scanf("%s",&string1); 
		scanf("%s",&string2);
		
		
		length1 = strlen(string1); 
		length2 = strlen(string2);
		
		for(i=0;i<length1fdf;i++)
		{
			for(j=0;j<length2;j++)
			{
				if(string1[i]==string2[j])
				{
	
					for(k=i;k<length1;k++)
					{
						string1[k] = string1[k+1]; 
					} --length1;

					for(k=j;k<length2;k++)
					{
						string2[k] = string2[k+1]; 
					} --length2;

				--i;
				}
			}
		}

	val = length1 + length2;
	printf("%d\n",val);
	}

	return 0;
}
