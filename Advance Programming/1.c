#include <stdio.h>
int flag[50]={0};
struct book{
    char name[100];
    int age;
    int train;
}book;
void booking();
void checking();
void cancel();
void fun(){

    int n,s;
 do
 {
     printf("\t\t\t ___Welcome to Railway Resevation___ \t\t\t\n");
    printf("\t\t\t 1. Booking \t\t\t\n\t\t\t 2. Availability checking \t\t\t\n\t\t\t 3. Cancellation \t\t\t\n");
    printf("Enter Your Choice:  ");
    scanf("%d",&n);
switch(n)
{
    case 1:
    booking();
    break;
    case 2:checking();
    break;
    case 3:cancel();
    break;
}
printf("\n Press 1 to continue: ");
scanf("%d",&s);
    }while(s==1);
}
void booking()
{
    printf("Enter The Passenger Name: \n");
    scanf("%s",book.name);
    printf("Enter The age of The Passenger: \n");
    scanf("%d",&book.age);
    printf("Enter The Train Number: \n");
    scanf("%d",&book.train);
    int n=book.train;
    if(flag[n]==0)
    {
        printf("Successfully Booked \n");
        flag[n]=1;
    }
    else
    {
        printf("Already Reseved \n");
    }
}
void checking(){
    int count=0;
    for(int i=0;i<=50;i++)
    {
        if(flag[i]==1){
            count++;
        }
    }
    printf("Now Total Seats Are:  %d \n",count);
    count=0;
}
void cancel(){
    int n;
    printf("Enter The Ticket Number: \n");
    scanf("%d",&n);
    if(n>=0 && n<=50){
    if(flag[n]==1){
        printf("Successfully Canceled \n");
        flag[n]=0;
    }
    else
    printf("Not Yet The Ticket Reserved \n");
}
else
printf("Invalid Ticket Number \n");
}
int main()
{
    fun();
}