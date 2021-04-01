#include <stdio.h>
#include <string.h>
int main()
{
	char str[30],str1[30],*result;
	int  a,i;
	
	printf("Enter string: ");
	scanf("%s",str);
	
	printf("Enter Substring: ");
scanf("%s",str1);
	result=strstr(str,str1);
if(result)
{
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]==str1[0])
			a=i;
	}
	printf("Indexes: %d",a);
}
else
{
    printf("-1");
}
}