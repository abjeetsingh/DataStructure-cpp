#include<stdio.h>
#include<stdlib.h>
int stack[20],top=-1;
int main()
{
    int max_size=15,item,ch,i;
 
    while(ch!=4)
    {    
        printf("\nSelect the operation:");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d",&ch);
        
        switch (ch)
        {
            case 1: printf("\nEnter the item you want to push: ");
                    scanf("%d",&item);
                    Push(item,max_size);
                    break;
                  
            case 2: Pop(); break;
 
            case 3: display(); break;
            
            case 4: exit(0); break;
 
            default: printf("\nWrong choice");
        }
    }
    return 0;
}
 
int Push(int item, int max_size)
{
    if(top==max_size)
    {
        printf("\nOverflow\n");
        return 0;
    }
    top=top+1;
    stack[top]=item;
    
    printf("\nUpdated stack is: \n");
    display();
}
 
int Pop()
{
    int item;
    if(top==-1)
    {
        printf("\nUnderflow\n");
        return 0;
    }         
 
    item=stack[top];
    top=top-1;
    printf("\nUpdated stack is: \n");
    display();
}
 
int display()
{
    int i;
    if(top==-1)
    {
        printf("\nStack is empty\n");
    }     
    for(i=0;i<=top;i++)
    {
        printf("\t%d\n",stack[i]);   }}

