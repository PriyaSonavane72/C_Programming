#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter the Number = ");
    scanf("%d",&No);

    if( No & (1 << 6))
    {
        printf("7th Bit Is on");
    }
    else
    {
        printf("7th Bit Is off");
    }

    getch();
    return 0;

}
