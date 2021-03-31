#include<stdio.h>
int main(void)
{
	int a[100],i,j,n,t;
	printf("Array size : ");
	scanf("%d",&n);
	printf("Enter array elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Array elements : \n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);       
	printf("\n");
	for(i=0;i<n-1;i++)                     
		for(j=i+1;j<n;j++)
		{
			if(i%2) 
			{  if(a[i]>a[j])
				a[i]=a[i]+a[j]-(a[j]=a[i]);
			}
			else
			{
				if(a[i]<a[j])   
					a[i]=a[i]+a[j]-(a[j]=a[i]);
			}
		} 
	printf("Array elements : \n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);       
	printf("\n");
	return 0;
}