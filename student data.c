#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>
#include<ctype.h>
struct node
{
	int rollno;
	char name[20];
	struct node*next;
}*start;
void create_list(int data,char str[])
{
	struct node *node,*new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->rollno=data;
	strcpy(new_node->name,str);
	new_node->next=NULL;
	if(start==NULL)
		start=new_node;
	else
	{
		node=start;
		while(node->next!=NULL)
			node=node->next;
		node->next=new_node;
	}
}
void display()
{
     struct node *node;
     if(start==NULL)
     {
        printf("List is empty");
        return;
     }
     node=start;
     printf("List is\n");
     while(node!=NULL)
     {
        printf("%d ",node->rollno);
        puts(node->name);
        node=node->next;
     }
     printf("\n");
}
void count()
{
	struct node *node=start;
	int cnt=0;
	while(node!=NULL)
	{
		node=node->next;
		cnt++;
	}
	printf("Number of elements are : %d\n",cnt);
}
void rev()
{
	struct node *p1,*p2,*p3;
	if(start==NULL)
		return;
	p1=start;
	p2=p1->next;
	p3=p2->next;
	p1->next=NULL;
	p2->next=p1;
	while(p3!=NULL)
	{
		p1=p2;
		p2=p3;
		p3=p3->next;
		p2->next=p1;
	}
	start=p2;
}
void add_to_beg(int rn,char str[])
{
    struct node *node,*new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->rollno=rn;
	strcpy(new_node->name,str);
	new_node->next=start;
	start=new_node;
}
void add_at_end(int rn,char str[])
{
    struct node *node,*new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
    new_node->rollno=rn;
    strcpy(new_node->name,str);
    new_node->next=NULL;
    node=start;
    while(node->next!=NULL)
    {
        node=node->next;
    }
    node->next=new_node;
}
void add_specific(int rn,char str[],int pos)
{
    struct node *node,*new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
    new_node->rollno=rn;
    strcpy(new_node->name,str);
    node=start;
    int cnt=1;
    while(cnt<pos-1)
    {
        node=node->next;
        cnt++;
    }
    new_node->next=node->next;
    node->next=new_node;
}
void del_beg()
{
    struct node *node;
    node=start;
    if(node==NULL)
    {
        printf("Underflow");
        exit(0);
    }
    else
    {
        start=node->next;
    }
    printf("The first node has been deleted.");
}
void del_end()
{
    struct node *node,*node1;
    node=start;
    if(node==NULL)
    {
        printf("Underflow");
        exit(0);
    }
    while(node->next!=NULL)
    {
        node1=node;
        node=node->next;
    }
    node1->next=NULL;
    printf("The last node has been deleted.");
}
void del_specific(int dpos)
{
    struct node *node;
    node = start;
    int cnt = 1;
    if(node == NULL)
    {
        printf("Underflow");
        exit(0);
    }
    while(cnt < dpos-1)
    {
        node = node->next;
        cnt = cnt + 1;
    }
    node->next = node->next->next;
    printf("The node from the specified position has been deleted.");
}
void main()
{
	int rn;
	char str[20];
	int n,m,pos,i,ch,loc,dloc;
	start = NULL;
	while(1)
	{    
           
		printf("\n\n1. Create List\n");
		printf("2. Add at the Beginning\n");
		printf("3. Add at the End\n");
		printf("4. Add at Specified Position\n");
		printf("5. Display\n");
		printf("6. Count\n");
		printf("7. Reverse\n");
		printf("8. Delete from the Beginning\n");
		printf("9. Delete from the End\n");
		printf("10. Delete from Specified Position\n");
		printf("11. Quit\n");
		printf("Enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter no. of nodes:");
                    scanf("%d",&n);
                    for ( i = 0; i < n; i++)
                    {
                        printf("Enter Rollno:");
                        scanf("%d", &rn);
                        printf("Enter the Name:");
                        scanf("%s", &str);
                        create_list(rn, str);
                    }
                    break;
	  		case 2: printf("Enter Rollno:");
                    scanf("%d", &rn);
                    printf("Enter the Name:");
                    scanf("%s", &str);
                    add_to_beg(rn, str);
                    break;
			case 3: printf("Enter Rollno:");
                    scanf("%d", &rn);
                    printf("Enter the Name:");
                    scanf("%s", &str);
                    add_at_end(rn, str);
                    break;
            case 4: printf("Enter Rollno:");
                    scanf("%d", &rn);
                    printf("Enter the Name:");
                    scanf("%s", &str);
                    printf("Enter the position:");
                    scanf("%d", &loc);
                    add_specific(rn,str,loc);
                    break;
            case 5: display();
                    break;
			case 6: count();
                    break;
			case 7: rev();
                    break;
            case 8: del_beg();
                    break;
            case 9: del_end();
                    break;
            case 10:printf("Enter the position to be deleted:");
                    scanf("%d",&dloc);
                    del_specific(dloc);
                    break;
			case 11: exit(0);
                    break;
			default:printf("Wrong Choice Entered!");
		}
	}
}
