#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0;

    printf("\n\n ===============**Pattern**===============\n\n");

    for( R = 1;R <= 5; R++)
    {
        for(C = 1; C <= 6; C++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n\n ===============************================\n\n");

    getch();
    return 0;
}




