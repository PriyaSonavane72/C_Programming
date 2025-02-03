#include<stdio.h>
#include<conio.h>

int main()
{
    int B1 = 0, B2 = 0, B_Sum =0;

    printf("\n =================***===================\n");

    printf("\n  Enter 1st Bill : ");
    scanf("%d",&B1);
    printf("\n  Enter 2nd Bill : ");
    scanf("%d",&B2);

    B_Sum = B1 + B2;

    printf("\n sum of Given Two Bills -> %d + %d = %d",B1 , B2,B_Sum );

    printf("\n\n ===============***====================\n");

    getch();
    return 0;
}
