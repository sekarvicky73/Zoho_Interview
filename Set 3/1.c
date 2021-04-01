#include <stdio.h>
int main() {
 char str[1000];
 int i=0,t,ans,j;
 scanf("%s",str);
 while(str[i]!=NULL)
 {
   if(str[i]>=48 && str[i]<=57)
   {
       t=str[i-1];
     ans=0;
while(str[i]>=48 && str[i]<=57)
{
    ans=ans*10+(str[i]-48);
    i++;
}
for(j=0;j<ans;j++)
printf("%c",t);
 }
 else 
 i++;
 }
}