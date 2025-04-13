#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7

int main()
{
    int i = 0, Bill[Size]={0},Src_Bill = 0,Cnt = 0;

    for(i = 0; i < Size; i++)
    {
        printf("Enter Bill no %d = ",(i+1));
        scanf("%d",&Src_Bill);
    }
        getch();
        system("cls");

        printf("\n\n Enter an Bill amount to Search : ");
        scanf("%d",&Src_Bill);

        for(i = 0; i < Size ; i++)
        {
            if(Src_Bill == Bill[i])
            {
                Cnt++;
            }
        }


        if(i < Size)
        {
            printf("\n\n %d Bill Fount at %d Times. ", Src_Bill, Cnt);
        }

        getch();
        return 0;

}
