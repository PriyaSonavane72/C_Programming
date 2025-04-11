#include<stdio.h>
#include<conio.h>

int main()
{
    int Bill = 0, Min_Bill = 0, i = 0, B_Cnt = 0;

    printf("\n Enter How Many Bills Do Yo Have : ");
    scanf("%d",&B_Cnt);

    printf("\n <=================******===================>\n");

    for( i = 0; i < B_Cnt; i++)
    {
        printf("\n Enter Bill %d : ", i+1 );
        scanf("%d",&Bill);

        if( (i == 0 ) || (Bill < Min_Bill) )
        {
            Min_Bill = Bill;
        }

    }

    printf("\n Min Bill is  = %d .",Min_Bill);

    printf("\n\n <=================******===================>\n");

    getch();
    return 0;
}

