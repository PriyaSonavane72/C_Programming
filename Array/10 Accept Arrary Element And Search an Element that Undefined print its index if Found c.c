#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 7

int main()
    {
        int i = 0, Bill[Size] = {0}, Src_Bill = 0;

        for(i = 0; i < Size; i++)
        {
            printf("Enter Bil No %d = ",(i+1) );
            scanf("%d",&Bill[i]);
        }

        getch();
        system("cls");

        printf("\n\n Enter an Bill amount to Search : ");
        scanf("%d",&Src_Bill);

        for(i = 0; i < Size ; i++)
        {
            if(Src_Bill == Bill[i])
            {
                break;
            }
        }


        if(i < Size)
        {
            printf("\n\n %d Bill Fount at %d Index. ", Src_Bill, 1);
        }

        getch();
        return 0;


}
