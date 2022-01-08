#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;
void push(int item)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    if(head==NULL)
    {
        temp->next=NULL;
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}
void display()
{
  if(head==NULL)
  {
      printf("\nUNDERFLOW");
  }  
  else
  {
      struct node* temp=head;
      printf("\nELEMENTS ARE : ");
      while(temp!=NULL)
      {
          printf("%d ",temp->data);
          temp=temp->next;
      }
  }
}
int pop()
{
     if(head==NULL)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        printf("\n POPPED ELEMENT : %d",head->data);
        int item=head->data;
        head=head->next;
        return item;
    }
}
int main()
{
    head=NULL;
    int ch,item;
    while(1)
    {
      
   
       printf("\n 1.Push");
       printf("\n 2.pop");
       printf("\n 3.display");
       printf("\n 4. Exit");

       printf("\nEnter your choice : ");
       scanf("%d",&ch); 
       switch(ch)
       {
           case 1:
           printf("\nenter element :");
           scanf("%d",&item);
           push(item);
           break;
           case 2:pop();
           break;
           case 3:display();
           break;
           case 4:
           exit(0);
       }
    }
    return 0;
}

