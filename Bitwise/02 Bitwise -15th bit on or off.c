#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter the Number = ");
    scanf("%d",&No);

    if( (No >> 14) & 1)
    {
        printf("15th Bit Is on");
    }
    else
    {
        printf("15th Bit Is off");
    }

    getch();
    return 0;

}

