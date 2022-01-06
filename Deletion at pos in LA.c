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
    
    printf("\nEnter Position from where element is to be deleted : ");
    scanf("%d",&K);

    for(J=K-1;J<N-1;J++)
    {
        LA[J]=LA[J+1];
    }

    printf("\nFinal array after deletion : ");
    for(J=0;J<N-1;J++)
    {
        printf("%d ",LA[J]);
    }
    
    return 0;
}
