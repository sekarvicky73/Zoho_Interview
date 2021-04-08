#include <stdio.h>
int min(int a,int b)
{
    if(a>b)
    {
        return b;
    }
    else 
    {
        return a;
    }
}
int main()
{
    int n,m;
 printf("enter the dimension of array: \n");
 scanf("%d %d",&n,&m);
 int a[n][m],ans[n][m],i,j;
  printf("enter the array Elements: \n");
 for (i=0;i<n;i++)
 {
    for (j=0;j<m;j++)
    {
     scanf("%d",&a[i][j]);
    }
 }
 ans[0][0]=a[0][0];
 for(i=1;i<n;i++)
 {
     ans[0][i]=a[0][i]+ans[0][i-1];
 }
  for(i=1;i<m;i++)
 {
     ans[i][0]=a[i][0]+ans[i-1][0];
 }
 for(i=1;i<n;i++){
     for(j=1;j<m;j++)
     {
        ans[i][j]=a[i][j]+(min(ans[i-1][j],ans[i][j-1]));
     }
 }
 printf("%d \n ",ans[n-1][m-1]);

 }