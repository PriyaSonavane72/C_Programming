#include<stdio.h>
#include<conio.h>

int main()
{
    int B1 = 0, B2 = 0,B3 = 0,B4 =0, B5 =0, B_Sum =0;

    printf("\n =================***===================\n");

    printf("\n  Enter 1st Bill : ");
    scanf("%d",&B1);
    printf("\n  Enter 2nd Bill : ");
    scanf("%d",&B2);
    printf("\n  Enter 3rd Bill : ");
    scanf("%d",&B3);
    printf("\n  Enter 4th Bill : ");
    scanf("%d",&B4);
    printf("\n  Enter 5th Bill : ");
    scanf("%d",&B5);

    B_Sum = B1 + B2 + B3 + B4 + B5;

    printf("\n sum of Given five Bills -> %d + %d + %d + %d + %d = %d",B1 , B2 , B3 , B4 , B5 ,B_Sum );

    printf("\n\n ===============***====================\n");

    getch();
    return 0;
}
