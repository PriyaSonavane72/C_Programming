#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i = 0, Num[3] = {};

    ///Accept
    for( i = 0; i < 3 ; i++ )
    {
        printf("\n Enter Value for Element Number %d = ",i+501);
        scanf("%d",&Num[i]);
    }

    system("cls");                    ///clrscr();

    printf("\n\n Enter a Key To see All Entered Values =>");
    getch();

    ///Display

    for (i = 0; i < 3; i++)
    {
        printf("\n Value of Element  %d = %d .",(i+101), Num[i]);
    }
    getch();
    return 0;

}
