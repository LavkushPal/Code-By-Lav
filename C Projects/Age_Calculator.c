#include<stdio.h>

int main()
{
    int ManD,ManM,ManY;
    int ToD,ToM,ToY;
    int TempD,TempM,TempY;

    printf("\n\t\t\t********************************************************\n\n");
label1:
    printf("\t\t\t\tEnter Your Date of Birth(DD/MM/YY)\n");
    scanf("%d %d %d",&ManD,&ManM,&ManY);

    printf("\n\t\t\t\tEnter Currrent Date(DD/MM/YY)\n");
    scanf("%d %d %d",&ToD,&ToM,&ToY);

    if(ToY<ManY)
    {
        printf("\n\t\t\t\tYour Date of Birth should be less than the Current Date\n\n");
        goto label1;
    }

    // Year Calculator Section

    TempY=ToY-ManY;

    // Month Calculator Section

    if(ToM>ManM)
    {
        TempM=ToM-ManM;
    }
    else
    {
        TempM=ToM-ManM;
        TempY--;
        TempM=12+TempM;
    }

    // Day Calculator Section

    if(ToD>ManD)
    {
        TempD=ToD-ManD;
    }
    else
    {
        TempD=ToD-ManD;
        TempM--;
        TempD=30+TempD;
    }

    printf("\n\t\t\t\tYou are %d Year, %d Month, %d Day\n",TempY,TempM,TempD);

    printf("\n\t\t    ****************************************************************\n\n");

    getch();


}
