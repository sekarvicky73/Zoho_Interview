#include<stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int start,end,len,ind,open=0,close=0;
    scanf("%s",s);
    len=strlen(s);
for(start=0,end=len-1;start<len;start++,end--)
{
    if(s[start]=='(')
    open++;
    else if(s[start]==')')
    open--;
    if(s[end]==')')
    close++;
    else if(s[end]=='(')
    close--;
    if(open<0){
    s[start]=-1;
    open=0;}
    if(close<0){
    s[end]=-1;
    close=0;}
}
for(ind=0;s[ind];ind++)
{
    if(s[ind]!=-1)
    printf("%c",s[ind]);
}
}