#include<stdio.h>
#include<stdlib.h>


void Fram_Show()
{
    int i,j;

    for(i=0;i<24;i++)
    {
        for(j=0;j<38;j++)
        {
           if( i==0 && j>=0 && j<38)
            {
              printf(" * ");
            }
         else if(i==23 && j>=0 && j<38)
            {
              printf(" * ");
            }
         else if(j==0 && i>=1 && i<23)
            {
              printf(" * ");
            }
         else if(j==37 && i>=1 && i<23)
            {
              printf(" * ");
            }

           else
           {
               if(i>=0 && j>=0 || i<22 && j<36)
            {
              printf(" 0 ");
            }
           else
           {
               printf("   ");
           }


           }
        }
        printf("\n");
    }
}

void Snak_Show()
{
    int i,j;

    for(i=0;i<23;i++)
    {
        for(j=0;j<37;j++)
        {
           if(i>=0 || j<36)
            {
              printf(" 0 ");
            }
           else
           {
               printf("   ");
           }

        }
        printf("\n");
    }
}

void main()
{
    printf("Snake Game Project \n");

    Fram_Show();
   // Snak_Show();
    printf("\n\n");
}
