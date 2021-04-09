#include <stdio.h>
#include <string.h>

int main()
{
char a[100],b[100],i,n,j;
printf("enter the 1st string:\n");
scanf("%s",a);
printf("enter the 2nd string: \n");
scanf("%s",b);
n=strlen(a);
for(i=0;i<n;i++){
        if(a[i]==b[i])
        {
        }
        else
        printf("%c %c \t",a[i],b[i]);
    }
}