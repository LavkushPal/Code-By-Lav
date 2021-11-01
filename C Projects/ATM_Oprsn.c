#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int i;
int p=1,k=0,x=0;
int pin,oldpn,newpn;
int wthda,ctnu,avbl=5000;
int stmnt[5];

void Crd_Dtl()
{
    int cvv;
    unsigned long long int crd=0;

    printf("-------------------------------------------------------------------\n");
    printf("Enter Card Number ");
    scanf("%16llu",&crd);

    printf("\n");
    printf("Enter CVV Number ");
    scanf("%3d",&cvv);

    printf("\n");
    printf("Enter PIN Number ");
    scanf("%4d",&pin);

}

void Show_Oprsn()
{
    printf("-------------------------------------------------------------------\n");
    printf("\n\t1 : Cash Withdraw \t2 : Mini Statement\n");
    printf("\t3 : Balance Enquiry \t4 : Pin Change\n");
    printf("\t5 : Exit\n");
}

void Csh_Wthdra()
{
    int n=1;
    int ltst1,ltst2;
    int t=0,ccs;
    int amnt=5000,chkr;


    printf("-------------------------------------------------------------------\n");
    label1:
    while(t<n)
    {
    printf("\n1 : Credit\n");
     printf("2 : Current\n");
      printf("3 : Saving\n");

      scanf("%d",&ccs);

       switch(ccs)
       {
       case 1:
           printf("Enter Amount ");
           scanf("%4d",&wthda);

           if(avbl>=wthda)
           {
               chkr=avbl;
               avbl=avbl-wthda;
               x=1;
           }
           else
           {
               printf("InSufficient Amount\n");
               x=0;
           }
           break;

       case 2:
           printf("Enter Amount ");
           scanf("%4d",&wthda);

           if(avbl>=wthda)
           {
               chkr=avbl;
               avbl=avbl-wthda;
               x=1;
           }
           else
           {
             printf("InSufficient Amount\n");
             x=0;
           }
           break;
       case 3:
           printf("Enter Amount ");
           scanf("%4d",&wthda);

           if(avbl>=wthda)
           {
               chkr=avbl;
               avbl=avbl-wthda;
               x=1;
           }
           else
           {
             printf("InSufficient Amount\n");
             x=0;
           }
           break;
       }

      t++;
    }

    if(avbl>=wthda)
     {
        printf("\nDebited Amount %d\n",wthda);
     }

    else
     {
         if(x==1)
         {
           printf("\nDebited Amount %d\n",wthda);
         }
         else
         {
           printf("Available balance %d\n",avbl);
         }
      }

      n++;

   if(wthda)
   {
    for(i=k;i<p;i++)
     {
        stmnt[i]=wthda;
     }
   }
    else
    {
        printf("transaction could not be saved\n");
    }
    p++;
    k++;

      printf("\nPress 1 to Continue  ");
      scanf("%d",&ctnu);
      if(ctnu==1)
       goto label1;

}
void Mni_Stmnt()
{
    int k=0,j=0;

    printf("\n");
    printf("-------------------------------------------------------------------\n");
   if(wthda)
   {

    for(i=k;i<p-1;i++)
     {
         j++;
        printf("Amount %d -> %d\n",j,stmnt[i]);
     }
   }
    else
    {
        printf("No Transaction available\n");
    }

}

void Blnc_Enq()
{
    printf("-------------------------------------------------------------------\n");
    printf("\nAvailable Balance %d\n",avbl);
}

void Pin_Chng()
{
    int a=0,r;

    printf("-------------------------------------------------------------------\n");
    label3:
    printf("\nEnter old PIN Number ");
    scanf("%4d",&oldpn);

    if(oldpn==pin)
    {
      printf("\nEnter new PIN Number ");
      scanf("%4d",&newpn);
      a=1;
    }
    else
    {
        printf("\nWrong Pin\n");
        a=0;
    }
    if(a==1)
    {
    pin=newpn;
    printf("Chnged PIN %d\n",pin);
    }
    else
    {
        printf("Press 1 to rechange ");
        scanf("%d\n",&r);
        goto label3;
    }

}

void main()
{
    int ch;
    printf("\n************************************************************************\n\n");

    Crd_Dtl();
    label4:
    Show_Oprsn();

    printf("\nChoose your option ");
    scanf("%1d",&ch);

    switch(ch)
    {
    case 1:
        Csh_Wthdra();
        break;
    case 2:
        Mni_Stmnt();
        break;
    case 3:
        Blnc_Enq();
        break;
    case 4:
        Pin_Chng();
        break;
    case 5:
        printf("\n************************************************************************\n\n");
        exit(0);
        break;
    default:
        printf("Invalid Option");
    }

    goto label4;

}
