#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0;

    printf("\n Enter 2 Integers => \n");

    printf("\n Enter Number 1 : ");
    scanf("%d",&No1);

    printf("\n Enter Number 2 : ");
    scanf("%d",&No2);

    if(No1 > No2)
    {
        printf("\n Number1 %d is maximum.",No1);
    }
    else
    {
        printf("\n Number2 %d is maximum.",No2);
    }
     getch();
     return 0;

}
