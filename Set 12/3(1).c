#include<stdio.h>

void main()
{
int a[100],k,count=0,q,rem,i,n;
printf("enter the size of array:\n");
scanf("%d",&n);
printf("enter the array:\n");
for (i=0;i<n;i++)
scanf("%d",&a[i]);\
printf("enter the threshold value:\n");
scanf("%d",&k);
for (i=0;i<n;i++)
{
q=a[i]/k;
rem=a[i]%k;
if(q>=1)
{
	count=count+q;
}
if(rem>=1)
{
	count=count+1;
}
}
printf("The count of the numbers in array is \n:");
printf("%d",count);
}