#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char s[]="sekar";
int n,i,x,y;
x=1;
y=1;
n=strlen(s);
for(i=0;i<n;i++)
{
gotoxy(x,y);
printf("%c",s[i]);
x++;
y++;
}
x=n;
y=1;
for(i=0;i<n;i++)
{
gotoxy(x,y);
printf("%c",s[i]);
x--;
y++;
}
getch();
}
