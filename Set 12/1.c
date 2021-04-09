#include <stdio.h>
#include <math.h>

int main()
{
int a,b,p,i;
float m;
printf("enter the range :\n");
scanf("%d %d",&a,&b);
for(i=a;i<b;i++){
    m=sqrt(i);
    p=m;
if(m==p)
{
    printf("%d \t",i);
}
}}