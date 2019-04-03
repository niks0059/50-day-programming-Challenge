#include<stdio.h>
int main()
{
	char str[40];
	int key=0,i;
	
	scanf("%s",str);
	scanf("%d",&key);
	
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a')&&(str[i]<='z'))  
		{
			
			str[i]=str[i]+key;
			if(str[i]> 'z')
			{
			
				str[i]=str[i]-26;
			}
		}
		else if((str[i]>='A')&&(str[i]<='Z'))
		{
			str[i]=str[i]+key;
			if(str[i]>'Z')
			{
				str[i]=str[i]-26;
			}
		}
		else if((str[i]>='0') && (str[i]<='9'))
		{
			str[i]=(int)str[i]+4;

			if(str[i]>'9')
			{
				str[i]=(int)str[i]-10;
			}
		}
		else 
			continue;
	
	}
	printf("%s",str);
}
