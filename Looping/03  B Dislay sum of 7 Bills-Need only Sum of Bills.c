#include<stdio.h>
#include<conio.h>

int main()
{
    int Bill = 0, B_Sum =0;

    printf("\n =================***===================\n");

    printf("\n  Enter Bill 1 : ");
    scanf("%d",&Bill);
    B_Sum = B_Sum + Bill;

    printf("\n  Enter Bill 2 : ");
    scanf("%d",&Bill);
    B_Sum = B_Sum + Bill;

    printf("\n  Enter Bill 3 : ");
    scanf("%d",&Bill);
    B_Sum = B_Sum + Bill;

    printf("\n  Enter Bill 4 : ");
    scanf("%d",&Bill);
    B_Sum = B_Sum + Bill;

    printf("\n  Enter Bill 5 : ");
    scanf("%d",&Bill);
    B_Sum = B_Sum + Bill;



    printf("\n sum of Given Five Bills -> %d.",B_Sum );

    printf("\n\n ===============***====================\n");

    getch();
    return 0;
}
