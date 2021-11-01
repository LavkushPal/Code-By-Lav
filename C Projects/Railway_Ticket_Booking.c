#include<stdio.h>
#include<stdlib.h>

int inr,avlst,trnum;
int dy,mh,yr;
int ag,mbl,pncod;
int trnum,adr;

int trn1[20],trn2[20],trn3;


int rewa=0x02186;
int njdn=0x01221;
int scknd=0x02715;
int mahanagri=0x02194;
int kmni=0x01072;

char srch[20];
char cls[15];
char qta[10];
char ch,qt;

char nam[15],gndr[20],adrs[30];
char cty[20],stt[30],pstofc[30];

char rwbpl[]="rewabhopal";
char bpldlh[]="bhopaldelhi";
char prgbmb[]="prayagbombay";


void Log_In()
{
    int usrid[7],pswd[5];
    int i,j;

    printf("\n\t\t\tLogIn Id\n");

    printf("\n");
    printf("User Id (Max 8 Character)\n");

    gets(usrid);
    printf("\n");
    printf("Password(Max 6 Digit)\n");
    gets(pswd);

    printf("\n\t\t\t\t\t\t\t\tLogIn id    ");

    puts(usrid);

}
void Trains()
{
    printf("\t\t\t\t\t\t\t\ttrn 1: rewabhopal\n");
    printf("\t\t\t\t\t\t\t\ttrn 2: bhopaldelhi\n");
    printf("\t\t\t\t\t\t\t\ttrn 3: prayagbombay\n");

}

void Search_Train()
{
    int i,j,k;

    char fndtrn[20];



    char cls1[]="Sleeper";
    char cls2[]="Second Sleeper";
    char cls3[]="AC";

    char qta1[]="General";
    char qta2[]="Ladies";
    char qta3[]="Tatkal";
    char qta4[]="Divyang";

    printf("\n\t\t\tSearch Train\n");

    Trains();
    printf("Enter city name  ");
    gets(srch);

    for(i=0;i<20;i++)
    {
        if(srch[i]==rwbpl[i])
        {
            fndtrn[i]=srch[i];
        }
        else
        {
            break;
        }

    }
    for(j=0;j<20;j++)
    {
        if(srch[j]==bpldlh[j])
        {
            fndtrn[j]=srch[j];
        }
        else
        {
            break;
        }

    }
    for(k=0;k<20;k++)
    {
        if(srch[k]==prgbmb[k])
        {
            fndtrn[k]=srch[k];
        }
        else
        {
            break;
        }

    }

    printf("\n");

    printf("Chosse Class( sleeper/general/ac )  ");
    scanf("%7s",&ch);

    switch(ch)
    {
    case 's':
        for(i=0;i<10;i++)
        {
         cls[i]=cls1[i];
        }
        break;
    case 'g':
        for(i=0;i<15;i++)
        {
         cls[i]=cls2[i];
        }
        break;
    case 'a':
        for(i=0;i<3;i++)
        {
         cls[i]=cls3[i];
        }
        break;
    default:
        printf("Invalid Class");
    }

    printf("\n");

    printf("Choose Quota( general/ladies/tatkal/divyang)  ");
    scanf("%7s",&qt);

    switch(qt)
    {
    case 'g':
        for(i=0;i<10;i++)
        {
         qta[i]=qta1[i];
        }
        break;
    case 'l':
        for(i=0;i<10;i++)
        {
         qta[i]=qta2[i];
        }
        break;
    case 't':
        for(i=0;i<10;i++)
        {
         qta[i]=qta3[i];
        }
        break;
    case 'd':
        for(i=0;i<10;i++)
        {
         qta[i]=qta4[i];
        }
        break;
    default:
        printf("Invalid Quota");
    }
    printf("\n");

    printf("Enter Date( DD/MM/YY)\n");
    scanf("%2d%2d%4d",&dy,&mh,&yr);

}

void AVL_Trn()
{
    int tst=0;
    printf("\n\t\t\t");
     puts(srch);
    printf("\t\t\t");
     printf(" %d/%d/%d",dy,mh,yr);

    printf("\n------------------------------------------------------------");



    if(srch[0]==rwbpl[0])
    {
      printf("\nRewa Spcl(02186)\n");
      printf("20.05\t\t09h:30m\t\t05.35\n");
      printf("Rewa\t\t Daily  \tBhopal");

    switch(ch)
     {
     case 's':
        inr=355;
        avlst=213;
        break;
     case 'g':
         inr=205;
      avlst=59;
        break;
     case 'a':
        inr=2180;
        avlst=10;
        break;
    default:
        printf("Invalid Class");
    }

      tst=1;
    }
    else if(srch[0]==bpldlh[0])
    {
      printf("\nNijamuddin Rajdhani Spcl(01221)\n");
      printf("02.05\t\t07h:50m\t\t09.55\n");
      printf("Bhopal Jn\tDaily\t\tDelhi Jn");

      printf("\n");
      printf("\nSachikhand Spcl(02715)\n");
      printf("00.50\t\t10h:10m\t\t11.00\n");
      printf("Bhopal Jn\tDaily\t\tNew Delhi Jn");

    switch(ch)
     {
     case 's':
        inr=410;
        avlst=130;
        break;
     case 'g':
         inr=240;
      avlst=33;
        break;
     case 'a':
        inr=2880;
        avlst=02;
        break;
    default:
        printf("Invalid Class");
    }

     tst=1;
    }
    else if(srch[0]==prgbmb[0])
    {
      printf("\nMahaNgari Spcl(02194)\n");
      printf("13.05\t\t22h:20m\t\t11.25\n");
      printf("cheoki Jn\tDaily\t\tKurla Jn");

      printf("\n");
      printf("\nKamayani Exp(01072)\n");
      printf("19.35\t\t27h:20m\t\t22.35\n");
      printf("Prayagraj Jn\tDaily\t\tLTT Jn");

    switch(ch)
     {
     case 's':
        inr=615;
        avlst=95;
        break;
     case 'g':
         inr=370;
      avlst=07;
        break;
     case 'a':
        inr=2415;
        avlst=19;
        break;
    default:
        printf("Invalid Class");
    }

     tst=1;
    }


    if(tst=1)
    {
      printf("\n-----------------");
      printf("\n%s\t%d INR\nAVL\t%d seat",cls,inr,avlst);
      printf("\n-----------------");
    }
    else
    {
        printf("This root has no any Trains");
    }

}

void Psngr_Dtl()
{

    char n[1];



    printf("\n\t\t\tPassenger Details\n");
     printf("\n");
     gets(n);
    printf("Name  ");
     gets(nam);
    printf("\nMale/Female/Commmon  ");
     gets(gndr);
    printf("\nDestination Adress  ");
     gets(adrs);
    printf("\nDestination City  ");
     gets(cty);
    printf("\nDestination State  ");
     gets(stt);
    printf("\nDestination Post Office  ");
     gets(pstofc);
    printf("\nDestination PinCode  ");
     scanf("%6d",&pncod);
    printf("\nAge  ");
     scanf("%2d",&ag);
    printf("\nMobile no.  ");
     scanf("%10d",&mbl);
    printf("\nAadhar no.  ");
     scanf("%12d",&adr);
     printf("\n");


     printf("Enter Train number");
     scanf("%5x",&trnum);

   if(trnum==rewa)
    {
      printf("\nRewa Spcl(02186)\n");
      printf("20.05\t\t09h:30m\t\t05.35\n");
      printf("Rewa\t\t Daily  \tBhopal");
    }
   else if(trnum==01221)
    {

      printf("\nNijamuddin Rajdhani Spcl(01221)\n");
      printf("02.05\t\t07h:50m\t\t09.55\n");
      printf("Bhopal Jn\tDaily\t\tDelhi Jn");
    }
   else if(trnum==02715)
    {
      printf("\n");
      printf("\nSachikhand Spcl(02715)\n");
      printf("00.50\t\t10h:10m\t\t11.00\n");
      printf("Bhopal Jn\tDaily\t\tNew Delhi Jn");
    }
   else if(trnum==mahanagri)
    {
      printf("\nMahaNgari Spcl(02194)\n");
      printf("13.05\t\t22h:20m\t\t11.25\n");
      printf("cheoki Jn\tDaily\t\tKurla Jn");
    }
   else if(trnum==01072)
    {
      printf("\n");
      printf("\nKamayani Exp(01072)\n");
      printf("19.35\t\t27h:20m\t\t22.35\n");
      printf("Prayagraj Jn\tDaily\t\tLTT Jn");
    }

}

void Pymnt_Dtl()
{
    int i;
    int amnt;
    int tst=0;
    char cpcha[3];
    char chkcha[3]="PaL";

    printf("\n\t\t\tPay Amount\n");
  label1:
      tst=0;
    printf("\n");

    printf("Enter Captcha -> PaL \n\t\t");
    scanf("%3s",cpcha);

     printf("Amount ");
    scanf("%4d",&amnt);



    if(cpcha[0]==chkcha[0])
        {
          if(cpcha[1]==chkcha[1])
            {
              if(cpcha[2]==chkcha[2])
               {
                  tst=1;
               }
            }
        }
        else
        {
            tst=0;
        }


    if(tst==0)
    {
        printf("In Correct Captcha\n");
        goto label1;
    }
    else
    {
        if(amnt==inr)
        {
           printf("Successfully Paid %d",amnt);
        }
        else
        {
           printf("In Correct Amount %d",amnt);
           goto label1;
        }
    }

}


void Bokng_Dtl()
{
            char dbas[2]="S";
            char brthtyps[6]="Upper";
            int cochs=9;
            int brths=29;

            char dbag[2]="D";
            char brthtypg[6]="Lower";
            int cochg=2;
            int brthg=65;

            char dbaa[2]="A";
            char brthtypa[11]="Side Upper";
            int cocha=4;
            int brtha=65;

    printf("\n\t\t\tBooking Details\n");

   if(trnum==rewa)
    {
      printf("\nRewa Spcl \t\tPNR-%d \n (02186) \n",adr);
      printf("\n20.05\t\t\t\t05.35\n");
      printf("\n%d/%d/%d\n",dy,mh,yr);
      printf("\nRewa\t\t        \tBhopal");
    }
   else if(trnum==njdn)
    {
      printf("\nNijamuddin Rajdhani Spcl \t\tPNR-%d \n(01221)\n",adr);
      printf("\n02.05\t\t\t\t09.55\n");
      printf("\n %d/%d/%d\n",dy,mh,yr);
      printf("\nBhopal Jn\t     \t\tDelhi Jn");
    }
   else if(trnum==scknd)
    {
      printf("\nSachikhand Spcl \t\tPNR-%d \n(02715)\n");
      printf("\n00.50\t\t\t\t11.00\n");
      printf("\n%d/%d/%d\n",dy,mh,yr);
      printf("\nBhopal Jn\t     \t\tNew Delhi Jn");
    }
   else if(trnum==mahanagri)
    {
      printf("\nMahaNgari Spcl \t\tPNR-%d \n(02194)\n");
      printf("\n13.05\t\t\t\t11.25\n");
      printf("\n%d/%d/%d\n",dy,mh,yr);
      printf("\ncheoki Jn\t     \t\tKurla Jn");
    }
   else if(trnum==kmni)
    {
      printf("\nKamayani Exp \t\tPNR-%d \n(01072)\n");
      printf("\n19.35\t\t\t\t22.35\n");
      printf("\n%d/%d/%d\n",dy,mh,yr);
      printf("\nPrayagraj Jn\t  \t\tLTT Jn");
    }

    printf("\n\n%s|%s",cls,qta);

    printf("\n\nPassenger information\n");
    printf("\n%s",nam);
    printf("\n%s | %d yrs\n",gndr,ag);

    switch(ch)
    {
        case 's':
            printf("\nTicket Status  Coach  Berth  BerthType\n");
            printf("Confirmed       %s%d     %d    %s\n",dbas,cochs,brths,brthtyps);
            break;

        case 'g':
            printf("\nTicket Status  Coach  Berth  BerthType\n");
            printf("Confirmed        %s%d    %d    %s\n",dbag,cochg,brthg,brthtypg);
            break;
        case 'a':
            printf("\nTicket Status  Coach  Berth  BerthType\n");
            printf("Confirmed        %s%d    %d    %s\n",dbaa,cocha,brtha,brthtypa);
            break;
    }

}

void main()
{

   printf("\n------------------------------------------------------------");
    Log_In();
   printf("\n------------------------------------------------------------");
    Search_Train();
   printf("\n------------------------------------------------------------");
    AVL_Trn();
   printf("\n------------------------------------------------------------");
    Psngr_Dtl();
   printf("\n------------------------------------------------------------");
    Pymnt_Dtl();
   printf("\n------------------------------------------------------------");
    Bokng_Dtl();
   printf("\n------------------------------------------------------------");


    printf("\n\n");
}
