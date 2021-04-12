#include<stdio.h>
#include<stdlib.h>
main()
{
int petrol,i,distance[100],capacity[100];
char bunks[100];
printf("*****Input*****\n");
printf("Petrol in car:\n");
scanf("%d",&petrol);
printf("Petrol bunks:\n");
 for(i=0;i<3;i++)
  scanf("\n%c",&bunks[i]);
  
 printf("Distance from petrol each petrol bunks:\n");
 for(i=0;i<3;i++)
  scanf("%d",&distance[i]);
  
 printf("Capacities of each petrol bunk:\n");
 for(i=0;i<3;i++)
  scanf("%d",&capacity[i]);
  
 printf("\n*****Output*****\n");
 for(i=0;i<3;i++)
 {
  if(petrol>0)
  {
   petrol=petrol-distance[i];
   
   if(petrol<0){
       printf("sorry....!!!cannot reach the %c petrol bank....!!!\n",bunks[i]);
       exit(0);
   }
   petrol=capacity[i]+petrol;
  }
  else
  {
   printf("sorry....!!!no petrol....!!!\n");
  }
 }
 if(petrol>0)
 printf("Remaining petrol in car is %d liters\n",petrol);
} 
