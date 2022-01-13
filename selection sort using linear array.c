AIM:Program to implement selection sort using linear array.
#include<stdio.h>
int main()
{
    int n,ele,temp;
    
    printf("\t  Selection Sort");
    printf("\n\n Enter No. of Elements :");
    scanf("%d",&n);
    int size=n-1;
    int A[size];
    printf("\n");
    for (int i=0;i<=n-1;i++)
    {
        printf("\tEnter Element %d :",i+1);
        scanf("%d",&A[i]);
    }
    printf("\n\tEntered Array\n\t ");
    for (int disp=0;disp<=size;disp++)
    {
        printf("%d ",A[disp]);
    }
    int c=1;
    for (int i=0;i<=size-1;i++)
    {
        printf("\n\n\t PASS %d",c);
        c=c+1;
        for (int j=i+1;j<=size;j++)
        {
            if (A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
            
            printf("\n         ");
        
            
            for (int disp=0;disp<=size;disp++)
            {
                printf("%d ",A[disp]);
            }
        }
    }
    printf("\n\n\t Sorted Array\n\t ");
    for (int k=0;k<=size;k++)
    {
        printf("%d ",A[k]);
    }
 
}
