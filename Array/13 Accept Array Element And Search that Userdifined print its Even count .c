#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7

int main()
{
    int i = 0, Bill[Size] = {0}, ECnt = 0;

    for(i = 0; i < Size ;i++)
    {
        printf("\n Enter Bill No %d = ",(i+1));
        scanf("%d",&Bill[i]);
    }
    getch();
    system("cls");

    for(i = 0; i < Size; i++)
    {
        if(Bill[i] %2 == 0 && Bill[i] != 0)
        {
            ECnt++;
        }
    }
    printf("\n Even Bills Count %d",ECnt);

    getch();
    return 0;
}
