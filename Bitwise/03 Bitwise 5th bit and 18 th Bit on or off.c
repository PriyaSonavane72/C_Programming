#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter the Number = ");
    scanf("%d",&No);

    if( ( (No >> 4 & 1)&&(No>>17) & 1))
    {
        printf(" \n Both 5th &18th  Bit Is On");
    }
    else if((No >> 17)& 1)
    {
        printf(" \n 18th Bit Is On &5th Bit is Off");
    }
    else if((No >>4)& 1)
    {
        printf("\n 5th Bit Is On & 18th Bit is Off");
    }
    else
    {
        printf("\n Both 5th &18th Bit Is Off");
    }

    getch();
    return 0;

}

