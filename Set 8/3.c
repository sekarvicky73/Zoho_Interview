int binary_con(num);
void main()
{
int r,temp,num,bin;
int sum=0;
scanf("%d",&num);
bin=binary_con(num);
printf("%d\n",bin);
temp=bin;
while(bin>0)
{
r=bin%10;
sum=sum*10+r;
bin=bin/10;
}
if(sum==temp)
{
printf("the number is palindrome");
}
else
{
printf("the number is not palindrome");
}
}
int binary_con(int num)
{
if(num==0)
{
return 0;
}
else
{
return (num%2) +10 * binary_con(num/2);
}
}