#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void main()
{
	int d,choice;
	struct node *head,*temp,*ptr,*ptr1,*front,*rear;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=0;
	head->link=NULL;
	ptr=head;
	do
	{
		printf("\nOPERATIONS\n1.INSERTION\n2.DELETION\n3.PRINT\n4.EXIT\nEnter the choice:");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("Enter the element");
			scanf("%d",&d);
			temp=(struct node*)malloc(sizeof(struct node));
			if(ptr->link==NULL)
			{
				front=temp;
				temp->data=d;
				temp->link=NULL;
				ptr->link=temp;
				ptr=ptr->link;
			}
			else
			{	
				temp->data=d;
				temp->link=NULL;
				ptr->link=temp;
				rear=ptr->link;
			}
		}
		else if(choice==2)
		{

			front=head->link;
			if(front->link==NULL)
			{
				printf("Empty Queue!!");
			}
			else{
				temp=front;
				front=front->link;
				temp->data=0;
				temp->link=NULL;
				free(temp);
				head->link=front;
			}	
		}
		else if(choice==3)
		{
			ptr1=head->link;
			if(ptr1==NULL)
			{
				printf("Empty QUEUE!!!");
			}
			else
			{
				printf("Front");
				while(ptr1!=NULL)
				{
					printf("->%d",ptr1->data);
					ptr1=ptr1->link;
				}
				printf("->NULL");
			}
		}
	}while(choice!=4);
}
			
