#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0, X = 0;

    printf("\n Enter the row & column :");
    scanf("%d",&X);

    printf("\n\n***********************************************\n\n");

    for(R = 1; R <= X; R++)
    {
        for(C = 1; C <= X; C++)
        {
            if(R == 1 || C == 1|| R == X ||( (R ==( (X/2)+1) ) && ( R + C <= X+1) ) )
            {
                printf(" * ");
            }
            else
            {
                ptintf("   ");
            }
        }
        printf("\n");
    }
    printf("\n\n***********************************************\n\n");

    getch();
    return 0;
}
