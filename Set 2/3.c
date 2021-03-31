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