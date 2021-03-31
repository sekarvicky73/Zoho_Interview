#include<stdio.h>
#include<math.h>
void main()
{
int n,array[10],i,sqrt_value,sum=0,sum_array[10],temp,temp1,j;
printf("Enter n number(1-10):");
scanf("%d",&n);
printf("Enter %d elements:",n);
for(i=0;i<n;i++)
scanf("%d",&array[i]);
for(i=0;i<n;i++){
sqrt_value=sqrt(array[i]);
if((sqrt_value*sqrt_value)==array[i])
sum+=5;
if(((array[i]%4)==0)&&((array[i]%6)==0))
sum+=4;
if(array[i]%2==0)
sum+=3;
sum_array[i]=sum;
sum=0;
}
printf("\n");
for(i=0;i<n;i++)
{
for(j=0;j<n-1-i;j++){
if(sum_array[j]>=sum_array[j+1]){
temp=sum_array[j];
temp1=array[j];
sum_array[j]=sum_array[j+1];
array[j]=array[j+1];
sum_array[j+1]=temp;
array[j+1]=temp1;
}
}
}
for(i=n-1;i>=0;i--)
printf("<%d,%d>\n",array[i],sum_array[i]);
}