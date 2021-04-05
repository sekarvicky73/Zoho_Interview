#include <stdio.h>

int main()
{
int a,b,c,d,e;
printf("enter the number : \n");
scanf("%d",&a);
if(a==0)
{
    printf("zero");
}
else if(a<0 || a>999)
{
    printf("invalid input");
}
else
{
b=a/100;
e=a%100;
c=e/10;
d=e%10;

switch(b)
        {
        case 1:
            printf("One hundred ");
            break;
        case 2:
            printf("Two hundred ");
            break;
        case 3:
            printf("Three hundred  ");
            break;
        case 4:
            printf("Four hundred ");
            break;
        case 5:
            printf("Five hundred ");
            break;
        case 6:
            printf("Six hundred ");
            break;
        case 7:
            printf("Seven hundred ");
            break;
        case 8:
            printf("Eight hundred ");
            break;
        case 9:
            printf("Nine hundred ");
            break;
        }
{if(b!=0 && c!=0 && d!=0)
printf("and ");}
switch (c)
    {

        case 1:
            switch (d)
            {
                case 0:
                    printf("ten"); 
                    return 0;
                case 1:
                    printf("eleven"); 
                    return 0;
                case 2:
                    printf("twelve"); 
                    return 0;
                case 3:
                    printf("thirteen"); 
                    return 0;
                case 4:
                    printf("fourteen"); 
                    return 0;
                case 5:
                    printf("fifteen"); 
                    return 0;
                case 6:
                    printf("sixteen"); 
                    return 0;
                case 7:
                    printf("seventeen"); 
                    return 0;
                case 8:
                    printf("eigthteen"); 
                    return 0;
                case 9:
                    printf("nineteen"); 
                    return 0;
            }
        case 2:
            printf("twenty "); 
            break;
        case 3:
            printf("thirty "); 
            break;
        case 4:
            printf("forty "); 
            break;
        case 5:
            printf("fifty "); 
            break;
        case 6:
            printf("sixty "); 
            break;
        case 7:
            printf("seventy "); 
            break;
        case 8:
            printf("eighty "); 
            break;
        case 9:
            printf("ninety "); 
            break;
    }
switch(d)
        {
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
}
}
