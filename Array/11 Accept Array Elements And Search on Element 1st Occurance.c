#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7

int main()
{
    int i = 0,Bill[Size] ={0},Src_Bill = 0;

    for(i = 0;i < Size; i++)
    {
        printf("\n Enter an Bill No %d =",(i+1));
        scanf("%d",&Bill[i]);
    }

    getch();
    system("cls");

    printf("\n\n Enter an Bill Amount to Search :");
    scanf("%d",&Src_Bill);

    for(i=0;i<Size ; i++)
    {
        if(Src_Bill == Bill[i])
        {
            break;
        }
    }
    if(i<Size)
    {
        printf("\n\n %d Bill Found at %d Location.",Src_Bill,(i+1));
    }
   else
   {
       printf("\n\n%d Bill Not Found",Src_Bill);
   }
   getch();
   return 0;
}


