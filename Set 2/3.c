#include<stdio.h>

int main()
{
 int n,i,a,count,r;
 scanf("%d",&n);
 
 for(i=1;n!=0;i++)
 {
  a=i;
  count=0;
  
  while(a>0)
  {
   r=a%10;
   a=a/10;
   count++;
   if(r==3 || r==4)
    count--;
   
  }
  if(count==0)
  {
  
   printf("%d\n",i);
      n--; 
 }
 }
return 0;
}





#2



#include<stdio.h>
int main()
{
     int n,k=1,a[10000],i;
     a[0]=3;a[1]=4;
     scanf("%d",&n);
    for(i=0;i<n;i++)
   {
    a[++k]=(a[i]*10)+3;
    a[++k]=(a[i]*10)+4;
    }
   for(i=0;i<n;i++)
   printf("%d ",a[i]);
}
