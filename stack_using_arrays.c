//program for stack using arrays

#include<stdio.h>

int main()
{
	while(1)
	{
	int arr[10],top=-1,ch,i;
	
	printf("stack program\n");
	printf("1.push\n2.pop\n3.display\n4.exit\n");
	scanf("%d",&ch);
	
	
	switch(ch)
	{
		case 1:
				if(top<10)
				{
					top++;
					printf("enter element to add on stack\n");
					scanf("%d",arr[top]);
				}
				else
					printf("stack overflow\n");
				break;
			
		case 2:
				arr[top]=0;
				top--;
				break;			
			
		case 3:
				printf("akjanf\n");
				for(i=top;i>=0;i--)
				{
					printf("%d\n",arr[i]);
				}
			
				break;
			
		case 4:
				exit(0);
		
		default:
				printf("something went wrong!\n");
	}
  }
return 0;
}
