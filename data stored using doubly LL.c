#include<stdio.h>
#include<malloc.h>
struct node
{
    struct node *previous;
    int emp_id;
    char emp_name[100];
    struct node *next;
} *start;
 
 
int create_list(int emp_id, char emp_name[])
{
    struct node *node,*new_node;
    new_node = (struct node *) malloc(sizeof(struct node));
    new_node -> emp_id = emp_id;
    strcpy(new_node -> emp_name,emp_name);
    new_node->next=NULL;
    new_node->previous=NULL;
    if(start==NULL)
    {
        start=new_node;
    }
    else
    {
        node = start;
        while(node->next!=NULL)
            node=node->next;
        node->next=new_node;
        new_node->previous = node;
 
    }
    return 0;
}
 
int display()
{
    int ch;
    printf("\nChoose the type of traversal : \n");
    printf("\n1. Traversal in Forward Direction \n");
    printf("\n2. Traversal in Backward Direction \n");
    printf("\nEnter choice: ");
    scanf("%d", &ch);
    
    switch(ch)
    {
        case 1 : display_in_forward_direction(); break;
        case 2 : display_in_reverse_direction(); break;
        default : printf("\nWrong Choice Entered \n");
 
    }
    return 0;
}
 
int display_in_forward_direction() 
{
    struct node *node;
    if(start == NULL)
    {
        printf("\nLink list is Empty");
        return;
    }
    node=start;
    printf("\n \t Employee ID \t | \t Employee Name ");
    while(node!=NULL)
    {
        printf(" \n \t %d \t \t \t %s ",node->emp_id, node->emp_name);
        node=node->next;
    }
    printf("\n");
    return 0;
}
 
int display_in_reverse_direction()
{
    struct node *node;
    if(start == NULL)
    {
        printf("\nLink list is Empty");
        return;
    }
    node=start;
    while(node -> next !=NULL) node = node->next;
 
    printf("\n \t Employee ID \t | \t Employee Name ");
    while(node!=NULL)
    {
        printf(" \n \t %d \t \t \t %s ",node->emp_id, node->emp_name);
        node=node->previous;
    }
    printf("\n");
    return 0;
}
 
int count()
{
    struct node *node=start;
    int count=0;
    while(node!=NULL)
    {
        node = node -> next;
        count++;
    }
 
    printf("\nThe number of Employee records in the list are:%d",count);
    return 0;
}
 
int insert_at_beginning( int emp_id, char emp_name[100] )
{
    struct node *node=start , *new_node;
    new_node = (struct node *) malloc(sizeof(struct node));
    new_node -> emp_id = emp_id;
    strcpy(new_node -> emp_name,emp_name);
    new_node -> next = start;
    node -> previous = new_node;
    new_node -> previous = NULL;
    start = new_node;
    printf("\nElement succesfully inserted at the beginning. \n");
    display();
    return 0;
}
 
int delete_from_end()
{
    struct node *node=start;
    if( node == NULL )
    {
        printf("\nUnderflow \n"); return 0;
    }
    else
    {
        while( node -> next -> next != NULL ) node = node -> next;
        node -> next = NULL;
    }
    display();
 
    return 0;
}
 

int main()
{
    int ch,n,m,pos,i, emp_id;
    char emp_name[100];
    start=NULL;
    while(1)
    {
        printf("\n1. Create list");
        printf("\n2. Display link list");
        printf("\n3. Count number of elements in link list");
        printf("\n4. Insert at beginning in the list");
        printf("\n5. Delete from end of the list");
        printf("\n6. Quit");
        printf("\n\nEnter Choice : \t");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nEnter no. of nodes ");
            scanf("%d",&n);
            printf("\nEnter Employee ID and name \t");
            for(i=0; i<n; i++)
            {
                scanf("%d%s",&emp_id,emp_name);
                create_list( emp_id, emp_name);
            }
            break;
        case 2: display(); break;
        case 3: count(); break;
        case 4: printf("\nEnter Employee ID and name \t");
                scanf("%d%s",&emp_id,emp_name);
                insert_at_beginning(emp_id, emp_name);
                break;
        
 
        case 5: delete_from_end(); break;
        case 6: exit(0);
        default: printf("\nWrong Choice");
        }
    }
    return 0;
}
