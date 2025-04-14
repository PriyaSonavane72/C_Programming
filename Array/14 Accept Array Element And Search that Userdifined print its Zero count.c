#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7

int main ()
{
    int i = 0,Bill[Size]={0},ZCnt = 0;

    for(i = 0; i < Size; i++)
    {
        printf("\n Enter Bill No %d  = ",(i+1));
        scanf("%d",&Bill[i]);
    }
    getch();
    system("cls");

    for( i=0;  i < Size; i++)
    {
        if(Bill[i] %2 ==1)
           {
               ZCnt++;
           }
    }
    printf("\n zero Bills Count = %d",ZCnt);

    getch();
    return 0;
}
