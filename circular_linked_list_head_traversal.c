#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node *head = NULL;
struct node *tail=NULL;

void display(void)
{
	printf("\nthis is display\n");
	int a;
	struct node* temp;
	temp=head;
	
	do
	{	
	
		temp=temp->next;
		printf("%d->",temp->data);
	}
	while(temp!=head);
}



void insert(void)
{
	int ch;
	struct node* tail;
	struct node* temp;
	
	
	temp=(struct node*)malloc(sizeof(struct node));	
	printf("\nenter data onto the node\n");
	scanf("%d",&temp->data);
	
	if(head==NULL)
	{
		head=temp;
		temp->next=head;
	}
	else
	{
		printf("\nEnter your Choice\n 1.AT_END 2.AFTER_NODE\n");
		scanf("%d",&ch);
		
		if(ch==1)
		{
			temp->next=head->next;
			head->next=temp;
			head=temp;
		}
		else if(ch==2)
		{
			int count=1,pos,a;
			printf("\nEnter position at which you want to insert the node\n");
			scanf("%d",&pos);
			a=length();
			
			if(pos>a)
			{
				printf("\nPlease enter valid position\n");
			}
			else
			{
				struct node *temp1,*prev;
				temp1=head->next;
				while(count!=pos)
				{
					prev=temp1;
					
					temp1=temp1->next;
					count++;
				}
				temp->next=temp1;
				prev->next=temp;
				
			}
		}
		else
		{
			printf("\nenter a valid choice\n");
		}
			
			
	}
}

int length(void)
{
	int count=0;
	struct node* temp;
	temp=head;
	do
	{
		count++;
		temp=temp->next;
	}
	while(temp!=head);
	return count;
}




int main()
{
	int choice;
	while(1)
	{
		printf("\nEnter your choice\n 1.INSERT 2.DISPLAY 4.Length 3.EXIT\n ");
		scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			insert();
			break;
		
		case 2:
			display();
			break;	
		
		case 3:
			length();
			break;
		
		case 4:
			exit(0);
			break;
		default:
			printf("\nenter valid choice\n");
			break;
	}
  }
return 0;
}

