#include<stdio.h>
#include<string.h>
void main()
{
char a[1000];
int i,j,count=0;
gets(a);
for(i=strlen(a)-1;i>=0;i--)
{
 count=count+1;
 if(a[i]==' '|| i==0)
 {
  for(j=i;j<=i+count;j++)
  {
  printf("%c",a[j]);
  }
 count=0;
 }
}
}