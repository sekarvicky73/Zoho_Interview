#include <stdio.h>
main()
{
    char *c="welcometozohocorporation";
    char array[5][5];
    int x;
    int y;
    int i=0;
     for(x=0;x<5;x++)
     {
         for(y=0;y<5;y++)
        {
         array[x][y]=c[i]; //intialising the characters of string to the 2d array
         i++;
         }
     }
     for(x=0;x<5;x++)
     {
      for(y=0;y<5;y++)
      {
        printf("array[%d][%d]=%c\n",x,y,array[x][y]);
        //printing the 2d array to make sure that it has been initialised with the string characters
      }
     }
  for(x=0;x<5;x++)
  {
      for(y=0;y<5;y++)
                 {
                 //check for left to right existence
                 if((array[x][y]=='t')&&(array[x][y+1]=='o')&&(array[x][y+2]=='o'))
      {
      printf("it starts at %d,%d",x,y);
      printf("\n");
      printf("it ends at %d,%d",x,y+2);
      }
      printf("\n");
                    //check for top to bottom existence
      if((array[x][y]=='t')&&(array[x+1][y]=='o')&&(array[x+2][y]=='o'))
      {
      printf("it starts at %d,%d",x,y);
      printf("\n");
      printf("it ends at %d,%d",x+2,y);
      }
      }
    }
}
