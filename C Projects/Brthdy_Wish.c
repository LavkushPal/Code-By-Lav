#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

char nam[10];

void Buddy_Nam()
{
    printf("Enter your name  ");
    gets(nam);
    printf("\n\n");
   // puts(nam);
}

void Cndl_Cak()
{
   // Beep(237,10000);
    printf("\n\t\t\t\t\t|\t|\t|\n");
     printf("\t\t\t\t\t|\t|\t|\n");
      printf("\t\t\t\t\t|\t|\t|\n");
       printf("\t\t\t\t\t|\t|\t|\n");

       printf("\t\t\t\t  -----------------------------\n");
       printf("\t\t\t\t  |\t\t\t      |\n");
       printf("\t\t\t\t  |\t Happy Birthday\t      |\n");
       printf("\t\t\t\t  |\t\t\t      |\n");
       printf("\t\t\t\t  |         %s\t      |\n",nam);
       printf("\t\t\t\t  |\t\t\t      |\n");
       printf("\t\t\t\t---------------------------------\n");
       printf("\t\t\t\t|\t\t\t\t|\n");
       printf("\t\t\t\t|\t\t\t\t|\n");
       printf("\t\t\t      -------------------------------------\n");
       //printf("\t\t\t     ---------------------------------------\n");

}

void Buddy_Wshs()
{
    int i;

    Beep(237,5050);

    for(i=0;i<2;i++){
    printf("\n  Happy Birthday  %s\n\n\t\t\t     Happy Birthday  %s\n\n\t\t\t\t\t\t\t Happy Birthday  %s\n",nam,nam,nam);

    }
}

void main()
{
     Buddy_Nam();
     Cndl_Cak();
     Buddy_Wshs();
     getchar();
}
