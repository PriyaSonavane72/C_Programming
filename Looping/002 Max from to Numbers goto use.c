#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0;

    printf("\n Enter 2 Integers => \n");

    printf("\n Enter Number 1 : ");
    scanf("%d",&No1);
    printf("\n Enter Number 2 : ");
    scanf("%d",&No2);

    if( No1 == No2)
    {
        printf("\n Both Given Number Same ...");
        goto Down;
    }
    if(No1 > No2)
    {
        printf("\n 1st Number %d is Maximum.",No1);
    }
    else
    {
        printf("\n 2st Number %d is Maximum.",No2);
    }

    Down :
        printf("\n Thanks");


   getch();
   return 0;

}

