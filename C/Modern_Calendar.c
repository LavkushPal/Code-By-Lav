#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//               ||        Modern Calendar       ||
void Dec_mth(int yr)
{

    if(yr%4==0)
    {
    printf("\n\n\n\t\t\t  December\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\n\t\t\t\t\t\n\t\t\t\t          1   2   3");
    printf("\n\t\t\t  4   5   6   7   8   9  10 ");
    printf("\n\t\t\t 11  12  13  14  15  16  17 ");
    printf("\n\t\t\t 18  19  20  21  22  23  24");
    printf("\n\t\t\t 25  26  27  28  29  30  31");


    }
    else
    {
    printf("\n\n\n\t\t\t  December\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\n\t\t\t\t      1   2   3   4");
    printf("\n\t\t\t  5   6   7   8   9  10  11");
    printf("\n\t\t\t 12  13  14  15  16  17  18");
    printf("\n\t\t\t 19  20  21  22  23  24  25 ");
    printf("\n\t\t\t 26  27  28  29  30  31");



    }
    printf("\n\n\n\t\t\t 25 Dec ~ Christmas Day");
}
void Nov_mth(int yr)
{

    if(yr%4==0)
    {
    printf("\n\n\n\t\t\t  November\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\n\t\t\t\t\t\n\t\t\t          1   2   3   4   5");
    printf("\n\t\t\t  6   7   8   9  10  11  12 ");
    printf("\n\t\t\t 13  14  15  16  17  18  19 ");
    printf("\n\t\t\t 20  21  22  23  24  25  26 ");
    printf("\n\t\t\t 27  28  29  30");



    }
    else
    {
    printf("\n\n\n\t\t\t  November\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\n\t\t\t      1   2   3   4   5   6");
    printf("\n\t\t\t  7   8   9  10  11  12  13");
    printf("\n\t\t\t 14  15  16  17  18  19  20");
    printf("\n\t\t\t 21  22  23  24  25  26  27");
    printf("\n\t\t\t 28  29  30");



    }
    printf("\n\n\n\t\t\t 4 Nov ~ Diwali ");
}
void Oct_mth(int yr)
{

    if(yr%4==0)
    {
    printf("\n\n\n\t\t\t  October\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\n\t\t\t\t\t\t  1");
    printf("\n\t\t\t  2   3   4   5   6   7   8");
    printf("\n\t\t\t  9  10  11  12  13  14  15");
    printf("\n\t\t\t 16  17  18  19  20  21  22");
    printf("\n\t\t\t 23  24  25  26  27  28  29");
    printf("\n\t\t\t 30  31");


    }
    else
    {
    printf("\n\n\n\t\t\t  October\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\n\t\t\t\t\t      1   2");
    printf("\n\t\t\t  3   4   5   6   7   8   9");
    printf("\n\t\t\t 10  11  12  13  14  15  16 ");
    printf("\n\t\t\t 17  18  19  20  21  22  23");
    printf("\n\t\t\t 24  25  26  27  28  29  30");
    printf("\n\t\t\t 31");



    }
    printf("\n\n\n\t\t\t 2 Oct ~ Gandhi Jayanti ");
}
void Sep_mth(int yr)
{

    if(yr%4==0)
    {
    printf("\n\n\n\t\t\t  September\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\n\t\t\t\t\t  1   2   3");
    printf("\n\t\t\t  4   5   6   7   8   9  10");
    printf("\n\t\t\t 11  12  13  14  15  16  17");
    printf("\n\t\t\t 18  19  20  21  22  23  24");
    printf("\n\t\t\t 25  26  27  28  29  30");


    }
    else
    {
    printf("\n\n\n\t\t\t  September\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\n\t\t\t\t      1   2   3   4");
    printf("\n\t\t\t  5   6   7   8   9  10  11");
    printf("\n\t\t\t 12  13  14  15  16  17  182");
    printf("\n\t\t\t 19  20  21  22  23  24  25");
    printf("\n\t\t\t 26  27  28  29  30");



    }
    printf("\n\n\n\t\t\t 10 Sep ~ Ganesh Chaturthi");
}
void Aug_mth(int yr)
{

    if(yr%4==0)
    {
    printf("\n\n\n\t\t\t  August\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\n\t\t\t      1   2   3   4   5   6");
    printf("\n\t\t\t  7   8   9  10  11  12  13");
    printf("\n\t\t\t 14  15  16  17  18  19  20 ");
    printf("\n\t\t\t 21  22  23  24  25  26  27");
    printf("\n\t\t\t 28  29  30  31");


    }
    else
    {
    printf("\n\n\n\t\t\t  August\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\n\t\t\t  1   2   3   4   5   6   7");
    printf("\n\t\t\t  8   9  10  11  12  13  14");
    printf("\n\t\t\t 15  16  17  18  19  20  21");
    printf("\n\t\t\t 22  23  24  25  26  27  28");
    printf("\n\t\t\t 29  30  31");



    }
    printf("\n\n\n\t\t\t 15 Aug ~ Independence Day");
    printf("\n\n\t\t\t 19 Aug ~ Muharram");
    printf("\n\n\t\t\t 22 Aug ~ Rakshabandhan");
}
void Jul_mth(int yr)
{

    if(yr%4==0)
    {
    printf("\n\n\n\t\t\t  July\t\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\t\t\t\t\t      1   2");
    printf("\n\t\t\t  3   4   5   6   7   8   9");
    printf("\n\t\t\t 10  11  12  13  14  15  16");
    printf("\n\t\t\t 17  18  19  20  21  22  23");
    printf("\n\t\t\t 24  25  26  27  28  29  30");
    printf("\n\t\t\t 31");


    }
    else
    {
    printf("\n\n\n\t\t\t  July\t\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\t\t\t\t\t  1   2   3");
    printf("\n\t\t\t  4   5   6   7   8   9  10");
    printf("\n\t\t\t 11  12  13  14  15  16  17");
    printf("\n\t\t\t 18  19  20  21  22  23  24");
    printf("\n\t\t\t 25  26  27  28  29  30  31");

    }
    printf("\n\n\n\t\t\t 21 Jul ~ Bakr Id");

}
void Jun_mth(int yr)
{

    if(yr%4==0)
    {
    printf("\n\n\n\t\t\t  June\t\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\t\t\t\t      1   2   3   4");
    printf("\n\t\t\t  5   6   7   8   9  10  11");
    printf("\n\t\t\t 12  13  14  15  16  17  18");
    printf("\n\t\t\t 19  20  21  22  23  24  25");
    printf("\n\t\t\t 26  27  28  29  30");

    }
    else
    {
    printf("\n\n\n\t\t\t  June\t\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\t\t\t\t  1   2   3   4   5");
    printf("\n\t\t\t  6   7   8   9  10  11  12");
    printf("\n\t\t\t 13  14  15  16  17  18  19");
    printf("\n\t\t\t 20  21  22  23  24  25  26");
    printf("\n\t\t\t 27  28  29  30");

    }

}
void May_mth(int yr)
{

    if(yr%4==0)
    {
    printf("\n\n\n\t\t\t  May\t\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\t\t\t  1   2   3   4   5   6   7");
    printf("\n\t\t\t  8   9  10  11  12  13  14");
    printf("\n\t\t\t 15  16  17  18  19  20  21 ");
    printf("\n\t\t\t 22  23  24  25  26  27  28");
    printf("\n\t\t\t 29  30  31");

    }
    else
    {
    printf("\n\n\n\t\t\t  May\t\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\t\t\t\t\t\t  1");
    printf("\n\t\t\t  2   3   4   5   6   7   8");
    printf("\n\t\t\t  9  10  11  12  13  14  15");
    printf("\n\t\t\t 16  17  18  19  20  21  22");
    printf("\n\t\t\t 23  24  25  26  27  28  29");
    printf("\n\t\t\t 30  31");


    }
    printf("\n\n\n\t\t\t  9 May ~ Mother's Day");

}
void Apr_mth(int yr)
{

    if(yr%4==0)
    {
    printf("\n\n\n\t\t\t  April\t\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\t\t\t\t\t      1   2");
    printf("\n\t\t\t  3   4   5   6   7   8   9");
    printf("\n\t\t\t 10  11  12  13  14  15  16 ");
    printf("\n\t\t\t 17  18  19  20  21  22  23");
    printf("\n\t\t\t 24  25  26  27  28  29  30");

    }
    else
    {
    printf("\n\n\n\t\t\t  April\t\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\t\t\t\t\t  1   2   3");
    printf("\n\t\t\t  4   5   6   7   8   9  10");
    printf("\n\t\t\t 11  12  13  14  15  16  17");
    printf("\n\t\t\t 18  19  20  21  22  23  24");
    printf("\n\t\t\t 25  26  27  28  29  30");

    }
    printf("\n\n\n\t\t\t 14 Apr ~ Ambedkar Jayanti");

}
void Mar_mth(int yr)
{

    if(yr%4==0)
    {
    printf("\n\n\n\t\t\t  March\t\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\t\t\t\t  1   2   3   4   5");
    printf("\n\t\t\t  6   7   8   9  10  11  12");
    printf("\n\t\t\t 13  14  15  16  17  18  19 ");
    printf("\n\t\t\t 20  21  22  23  24  25  26");
    printf("\n\t\t\t 27  28  29  30  31");

    }
    else
    {
    printf("\n\n\n\t\t\t  March\t\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\t\t\t      1   2   3   4   5   6");
    printf("\n\t\t\t  7   8   9  10  11  12  13");
    printf("\n\t\t\t 14  15  16  17  18  19  20");
    printf("\n\t\t\t 21  22  23  24  25  26  27");
    printf("\n\t\t\t 28  29  30  31");

    }
    printf("\n\n\n\t\t\t 29 Mar ~ Holi");

}
void Feb_mth(int yr)
{

    if(yr%4==0)
    {
    printf("\n\n\n\t\t\t  Febuary\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\t\t\t      1   2   3   4   5   6");
    printf("\n\t\t\t  7   8   9  10  11  12  13 ");
    printf("\n\t\t\t 14  15  16  17  18  19  20 ");
    printf("\n\t\t\t 21  22  23  24  25  26  27 ");
    printf("\n\t\t\t 28  29");

    }
    else
    {
    printf("\n\n\n\t\t\t  Febuary\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\t\t\t      1   2   3   4   5   6");
    printf("\n\t\t\t  7   8   9  10  11  12  13 ");
    printf("\n\t\t\t 14  15  16  17  18  19  20 ");
    printf("\n\t\t\t 21  22  23  24  25  26  27 ");
    printf("\n\t\t\t 28 ");

    }
    printf("\n\n\n\t\t\t  8 Feb ~ Propose Day");
    printf("\n\n\t\t\t 11 Feb ~ Promise Day");
    printf("\n\n\t\t\t 14 Feb ~ Valentine's Day");
}
void Jan_mth(int yr)
{

    printf("\n\t\t\t  January\t       %d",yr);

    printf("\n\n\t\t\t  S   M   T   W   T   F   S\n\n");

    printf("\t\t\t\t\t      1   2\n\t\t\t  3   4   5   6   7   8   9 ");
    printf("\n\t\t\t 10  11  12  13  14  15  16 ");
    printf("\n\t\t\t 17  18  19  20  21  22  23 ");
    printf("\n\t\t\t 24  25  26  27  28  29  30 ");
    printf("\n\t\t\t 31 ");


    printf("\n\n\n\t\t\t  1 Jan ~ New Year's Day");
    printf("\n\n\t\t\t 14 Jan ~ Makarsankranti");
    printf("\n\n\t\t\t 26 Jan ~ Republic Day");


}
main()
{
     int yr;

     printf("\n\n\t\t    *********** Modern Calendar ***********");
     printf("\n\n\n\t\t\t     Enter Year  ");

     scanf("%4d",&yr);

     if(yr%4==0)
     {
     printf("\n\t\t\t  ****************************\n");
     printf("\t\t\t    %d  is  a  leap  year",yr);
     printf("\n\t\t\t  ****************************\n");

     }

     printf("\n\n\t\t\t ---------------------------");
       Jan_mth(yr);
     printf("\n\n\t\t\t ---------------------------");
       Feb_mth(yr);
     printf("\n\n\t\t\t ---------------------------");
       Mar_mth(yr);
     printf("\n\n\t\t\t ---------------------------");
       Apr_mth(yr);
     printf("\n\n\t\t\t ---------------------------");
       May_mth(yr);
     printf("\n\n\t\t\t ---------------------------");
       Jun_mth(yr);
     printf("\n\n\t\t\t ---------------------------");
       Jul_mth(yr);
     printf("\n\n\t\t\t ---------------------------");
       Aug_mth(yr);
     printf("\n\n\t\t\t ---------------------------");
       Sep_mth(yr);
     printf("\n\n\t\t\t ---------------------------");
       Oct_mth(yr);
     printf("\n\n\t\t\t ---------------------------");
       Nov_mth(yr);
     printf("\n\n\t\t\t ---------------------------");
       Dec_mth(yr);
     printf("\n\n\t\t\t ---------------------------\n");


     printf("\n\n\t\t       **** Coded By Lavkush Pal ****");
     printf("\n\n\t\t   **************************************\n\n\n");

     return(0);
}
