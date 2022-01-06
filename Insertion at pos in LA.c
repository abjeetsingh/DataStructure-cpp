#include<stdio.h>
int main()
{
    int J,K,N,ITEM;
   
    printf("Enter no. of elements : ");
    scanf("%d",&N);

    int LA[N];

    printf("\nEnter elements of array : ");
    for(J=0;J<N;J++)
    {
        scanf("%d",&LA[J]);
    }
    
    printf("\nEnter Position where element is to     be inserted : ");
    scanf("%d",&K);

    printf("\nEnter element to be inserted : ");
    scanf("%d",&ITEM);

    for(J=N-1;J>=K-1;J--)
    {
        LA[J+1]=LA[J];
    }
    LA[K-1]=ITEM;
    printf("\nFinal array after insertion : ");
    for(J=0;J<=N;J++)
    {
     printf("%d ",LA[J]);}
    return 0;   }


