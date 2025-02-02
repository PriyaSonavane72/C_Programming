#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0, Temp = 0;

    printf("\n Enter Number 1 : ");
    scanf("%d",&No1);
    printf("\n Enter Number 2 : ");
    scanf("%d",&No2);

    printf("\n\n Given Numbers Before swap \n Number1 = %d, Number2 = %d. " ,No1,No2);

    Temp = No1;
    No1 = No2;
    No2 = Temp;

    printf("\n\n Given Number After swap \n Number1 = %d, Number2 = %d.",No1,No2);

    getch();
    return 0;
}
