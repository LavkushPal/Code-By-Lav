#include<stdio.h>
#include<stdlib.h>

int m,n;
int arr[5];
void Show_UI()
{
    int pi=227,undroot=251;

    printf("\t\t\t\t______________________________\n");
    printf("\n\t\t\t\t   1  2  3  |  +  -");
    printf("   %c  x^2  ",pi);
    printf("\n\t\t\t\t   4  5  6  |  *  /      x^3  ");
    printf("\n\t\t\t\t   7  8  9  |  %  !");
    printf("  %c   ^  10^",undroot);
    printf("\n\t\t\t\t      0     |  Cncl        ");
    printf("\n\t\t\t\t____________|_________________\n");

}
void Add_Oprsn()
{
    int sum=0,n,i;

    printf("How many number want you add ");
    scanf("%d",&n);
    printf("\n");
    printf("Enter value to Add ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("\n   = %d ",sum);
}
void Sub_Oprsn()
{
    int sub=0,n,i,rytsub;

    printf("How many number you want Subtract ");
    scanf("%d",&n);
    printf("\n");
    printf("Enter value to Subtract\n  ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        sub=arr[i]-sub;
    }
    rytsub=(-(sub));
    printf("\n   = %d ",rytsub);
}
void Mul_Oprsn()
{
    int mul=1,n,i;

    printf("How many number you want Multiply ");
    scanf("%d",&n);
    printf("\n");
    printf("Enter value to Multiply\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        mul=arr[i]*mul;
    }
    printf("\n  = %d ",mul);
}
void Div_Oprsn()
{
     int n,i;
     float div=1;

    printf("How many number you want Divide ");
    scanf("%d",&n);
    printf("\n");
    printf("Enter value to Divide\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
       if(i<=0)
        {
            div=arr[i]/div;
        }
        else
        {
            div=div/arr[i];
        }
    }
    printf("\n  = %f ",div);
}
void Perc_Oprsn()
{
    float m,n;
    float perc;


    printf("Enter percent  ");
    scanf("%f",&m);

    printf("out of  ");
    scanf("%f",&n);


    perc=m*n/100;
    printf(" = %f",perc);

}
void Pi_Oprsn()
{
    float pi,pireslt;

    printf("Enter number\n");
    scanf("%f",&pi);

    pireslt=pi*22/7;
    printf("= %f",pireslt);


}
void Fact_Oprsn()
{
    int fact=1;
    int i,n;

    printf("Enter number ");
    scanf("%d",&n);

    for(i=n;i>0;i--)
    {
        fact=fact*i;
    }
    printf("= %d",fact);

}
void Pow_Oprsn()
{
    int pow,bas;
    int n=1,t=1;

    printf("Enter first base number & then power\n");
    scanf("%d %d",&bas,&pow);

    if(pow==0)
    {
        n=1;
    }
    else
    {
        while(t<=pow)
        {
           n=n*bas;
           t++;
        }
    }
    printf(" =%d",n);
}
void Sqr_Oprsn()
{
    int bas;
    int sqr;

    printf("Enter a base number\n");
    scanf("%d",&bas);

    sqr=bas*bas;
    printf(" =%d",sqr);
}
void Cub_Oprsn()
{
    int bas;
    int cub;

    printf("Enter a base number\n");
    scanf("%d",&bas);

    cub=bas*bas*bas;
    printf(" =%d",cub);

}
void Sqroot_Oprsn()
{
    int root,sqroot;
    int i,n,r;

    printf("Enter number");
    scanf("%d",&root);

    n=root/2;
    for(i=2;i<=n;i++)
    {

        if(root%i==0)
        {
            sqroot=i*i;
            if(sqroot==root)
            {
                printf(" =%d",i);
                break;
            }
        }
    }
    if(sqroot!=root)
        printf("Not find UNDER ROOT of this %d",root);


}
void Curoot_Oprsn()
{
    int root,curoot;
    int i,n,r;

    printf("Enter number");
    scanf("%d",&root);

    n=root/4;
    for(i=2;i<=n;i++)
    {
        if(root%i==0)
        {
            curoot=i*i*i;
            if(curoot==root)
            {
                printf(" =%d",i);
                break;
            }
         }
      }
    if(curoot!=root)
        printf("Not find CUBE ROOT of this %d",root);


}
void TenPow_Oprsn()
{
    int pow,bas=10;
    int n=1,t=1;

    printf("Enter power number\n");
    scanf("%d",&pow);

    if(pow==0)
    {
        n=1;
    }
    else
    {
        while(t<=pow)
        {
           n=n*bas;
           t++;
        }
    }
    printf(" =%d",n);
}


void main()
{
    int ch;

    Show_UI();
    printf("\n Here\n");
    printf(" # for pi\n");
    printf(" ! for factorial\n");
    printf(" ^ for power\n");
    printf(" 2 for square\n");
    printf(" 3 for cube\n");
    printf(" w for square root\n");
    printf(" e for cube root\n");
    printf(" t for power of ten\n");
    printf("\n\nEnter operator first\n ");
        scanf("%c",&ch);

       switch(ch)
        {
        case '+':
            Add_Oprsn();
            break;
        case '-':
            Sub_Oprsn();
            break;
        case '*':
            Mul_Oprsn();
            break;
        case '/':
            Div_Oprsn();
            break;
        case '%':
            Perc_Oprsn();
            break;
        case '#':
            Pi_Oprsn();
            break;
        case '!':
            Fact_Oprsn();
            break;
        case '^':
            Pow_Oprsn();
            break;
        case '2':
            Sqr_Oprsn();
            break;
        case '3':
            Cub_Oprsn();
            break;
        case 'w':
            Sqroot_Oprsn();
            break;
        case 'e':
            Curoot_Oprsn();
            break;
        case 't':
            TenPow_Oprsn();
            break;

        }
        getch();


}
