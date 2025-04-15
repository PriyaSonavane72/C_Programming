#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7

int main()
{
    int i = 0, Bill[i], MaxBill = 0;

     for(i = 0; i < Size; i++)
    {
        printf("\n Enter Bill No %d  = ",(i+1));
        scanf("%d",&Bill[i]);
    }
    getch();

    for( i=0;  i < Size; i++)
    {
        if((i == 0) || Bill[i]> MaxBill)
           {
               MaxBill = Bill[i];
           }
    }
    printf("\n Max Bill = %d",MaxBill);

    getch();
    return 0;
}


