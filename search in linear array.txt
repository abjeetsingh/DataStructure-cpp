#include <stdio.h>
int main()
{
    int n,ele,pos,k=0;
    printf("\t     Linear Search");
    printf("\n\n\tEnter No. of Elements :");
    scanf("%d",&n);
    int A[n-1];
    printf("\n");
    for (int i=0;i<=n-1;i++)
    {
        printf("\tEnter Element %d :",i+1);
        scanf("%d",&A[i]);
    }
    printf("\n\t Enter Element :");
    scanf("%d",&ele);
    for (int j=0;j<=n-1;j++)
    {
        if (A[j]==ele)
        {
            k=k+1;
            pos=j+1;
        }
    }
    if (k==0)
    {
        printf("\n       Element %d not present\n",ele);
    }
    else
    {
        printf("\n     Element %d present at position %d\n",ele,pos);
    
}
