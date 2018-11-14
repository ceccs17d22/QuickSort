#include<stdio.h>
void main()
{
    int Stack[10],top=-1,choice,i;
    
    
    do
    {
        printf("\nOperations\n1.PUSH\n2.POP\n3.PRINT\n4.EXIT\nEnter the choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            top=top+1;
            printf("Enter the element");
            scanf("%d",&Stack[top]);
            
            

        }
        else if(choice==2)
        {
            if(top==-1)
            {
                printf("Stack is empty;");
                

            }
            else
            {
                
                Stack[top]=0;
                top=top-1;
                
            }
        }
        else if(choice==3)
        {
            if(top==-1)
            {
                printf("Stack is Empty");

            }
            else
            {
                for(i=top;i>-1;i--)
                {
                    printf("%d ->",Stack[i]);
                    

                }
                printf("NULL");
                
            }
        }

    }while(choice!=4);   
}