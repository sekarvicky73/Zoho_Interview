#include <stdio.h>
#include <string.h>

int main()
{
char a[10][100],b[10][100],str[100];
int num,k;
scanf("%d",&num);

scanf("%s",&str);

for(int i=0;i<num;i++)
{
scanf("%s%s",&a[i],&b[i]);
if(strcmp(str,b[i]) == 0)
k = i;
}

int count = 0;

for(int i=0;i<num;i++)
{
if(strcmp(a[k],b[i]) == 0)
count++;
}

printf("%d",count);


return 0;

}