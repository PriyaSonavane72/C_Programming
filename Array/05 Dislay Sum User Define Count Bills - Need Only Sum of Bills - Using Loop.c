#include<stdio.h>
#include<conio.h>

int main()
{
    int Bill = 0, B_Sum = 0, i = 0, B_Cnt = 0;

    printf("\n Enter How Many Bills Do Yo Have : ");
    scanf("%d",&B_Cnt);

    printf("\n <=================******===================>\n");

    for( i = 1; i <= B_Cnt; i++)
    {
        printf("\n Enter Bill %d : ", i);
        scanf("%d",&Bill);
        B_Sum = B_Sum + Bill;
    }

    printf("\n Sum of Given %d Bill = %d .",B_Cnt, B_Sum);

    printf("\n\n <=================******===================>\n");

    getch();
    return 0;
}
