#include<stdio.h>
#include<stdlib.h>
 
 
void merge(int a[],int l, int m, int r)
{
         	Int i=l;
         	int  j=m+1;
         	int  k=l;
         	int  temp[r+1];
         	while(i<=m && j<=r)
         	{
                      	if(a[j]<=a[i])
                      	{
                                  	temp[k]=a[j];
                                  	j++;
                                  	k++;
                      	}
                      	else
                      	{
                                  	temp[k]=a[i];
                                  	i++;
                                  	k++;
                      	}
         	}
         	while(i<=m)
         	{
                      	temp[k]=a[i];
                      	i++;
                      	k++;
         	}
         	while(j<=r)
         	{
                      	temp[k]=a[j];
                      	j++;
                      	k++;
         	}
         	for(inti=l;i<=r;i++)
         	{
                      	a[i]=temp[i];
         	}
 
}
 
voidmergeSort(int a[],int l, int r)
{
         	if(l<r)
         	{       	
                      	int m=(l+r)/2;
                      	mergeSort(a,l,m);
                      	mergeSort(a,m+1,r);
                      	merge(a,l,m,r);
         	}
}
 
int main()
{       	
         	int n;
         	printf("\n size of array");
         	scanf("%d",&n);
         	Intar[n];
printf("\n Enter elements ");
         	for(inti=0;i<n;i++)
         	{
                      	scanf("%d",&ar[i]);
         	}
         	
         	mergeSort(ar,0,n-1);
printf("\n Sorted array : ");
         	for(inti=0;i<n;i++)
         	{
                      	printf(" %d ",ar[i]);}
  	
