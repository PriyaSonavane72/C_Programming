#include<stdio.h>
#include<conio.h>

int main()
{
    int Bill = 0, Max_Bill = 0, i = 0, B_Cnt = 0;

    printf("\n Enter How Many Bills Do Yo Have : ");
    scanf("%d",&B_Cnt);

    printf("\n <=================******===================>\n");

    for( i = 1; i <= B_Cnt; i++)
    {
        printf("\n Enter Bill %d : ", i);
        scanf("%d",&Bill);

        if( (i == 1) || (Bill > Max_Bill) )
        {
            Max_Bill = Bill;
        }

    }

    printf("\n Max Bill is  = %d .",Max_Bill);

    printf("\n\n <=================******===================>\n");

    getch();
    return 0;
}

