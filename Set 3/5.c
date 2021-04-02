#include<stdio.h>
int main()
{
	int a[100],b[100],c[100],i,j,k,l,m,n;
	printf("\n---------------------------------------------------------------\n");
	printf("Array  size 1: ");
	scanf("%d",&m);
	printf("Elements to array 1 : \n");
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	printf("Array  size 2: ");
	scanf("%d",&n);
	printf("Elements to array 2 : \n");
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	printf("\n---------------------------------------------------------------\n");
	printf("\nArray 1 elements :");
	for(i=0;i<m;i++)
		printf("%d ",a[i]);
	printf("\nArray 2 elements :");
	for(i=0;i<n;i++)
		printf("%d ",b[i]);
	for(i=0;i<m;c[i]=a[i],i++);    
	for(j=0;j<n;c[i]=b[j],i++,j++);
	l=m+n;                         
	for(i=0;i<l;i++)
		for(j=i+1;j<l;j++)
			if(c[i]==c[j])   
			{
				for(k=j;k<l-1;c[k]=c[k+1],k++);    
				l--;                              
				j--;                              
			}         
for(i=0;i<l;i++)
{
for(j=i+1;j<l;j++)
{
    if(c[i]>c[j])
    {
        c[i]=c[i]+c[j]-(c[j]=c[i]);
    }
}
}
	printf("\nArray 3 sorted elements :");
	for(i=0;i<l;i++)
		printf("%d ",c[i]);
        printf("\n");
        printf("\n---------------------------------------------------------------\n");
 }