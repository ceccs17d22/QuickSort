// Goutham G
// S3D
// 22

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
	head->link=head;
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
			if(ptr->link==head)
			{
				front=temp;
				temp->data=d;
				temp->link=head;
				ptr->link=temp;
				ptr=ptr->link;
			}
			else
			{	
				temp->data=d;
				temp->link=head;
				ptr->link=temp;
				rear=ptr->link;
			}
		}
		else if(choice==2)
		{
			front=head->link;
			temp=front;
			front=front->link;
			temp->data=0;
			temp->link=head;
			free(temp);
			head->link=front;
		}
		else if(choice==3)
		{
			ptr1=head->link;
			if(ptr1==head)
			{
				printf("Empty QUEUE!!!");
			}
			else
			{
				printf("Front");
				while(ptr1!=head)
				{
					printf("->%d",ptr1->data);
					ptr1=ptr1->link;
				}
				printf("->Front");
			}
		}
	}while(choice!=4);
}
			
