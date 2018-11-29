// Goutham G
// S3D
// 22

#include<stdio.h>
void main()
{
	int Q[20],d,i,Front=0,Rear=0,item,choice,Front1,Rear1;
	do
	{
		printf("\nOPERATIONS\n1.INSERTION\n2.DELETION\n3.PRINT\n4.EXIT\nEnter the choice:");
		scanf("%d",&choice);
		if(choice==1)
		{
			if(Front==0)
			{
				Front+=1;
				Rear+=1;
				printf("Enter the element");
				scanf("%d",&Q[Front]);
			}
			else
			{
				Rear+=1;
				printf("Enter the element");
				scanf("%d",&Q[Rear]);
			}
		}
		else if(choice==2)
		{
			if(Front==0 && Rear==0)
			{
				printf("Empty QUEUE!!!");
			}
			else if(Front==Rear)
			{
				item=Q[Front];
				Front=0;
				Rear=0;
				printf("Deleted Item%d",item);
			}
			else if(Front>Rear)
			{
				Front=0;
				Rear=0;
				printf("Empty!!");
			}
			else
			{
				item=Q[Front];
				Front+=1;
				printf("Deleted Item %d",item);
			}	
		}
		else if(choice==3)
		{
			Front1=Front;
			Rear1=Rear;
			if(Front1==0 && Rear1==0)
			{
				printf("Empty QUEUE!!");
			}
			else
			{
				while(Front1!=Rear1+1)
				{
					printf("%d ->",Q[Front1]);
					Front1+=1;
				}
				printf("NULL");
			}
		}
	}while(choice!=4);
}		
				
		
	
	
