#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 7,i = 1;

    printf ("\n Table of %d is => \n",No);

    while(i <= 10)
    {
        printf("\n %3d * %3d = %3d.",No,i, (i * No));
        i++;
    }

    getch();
    return 0;
}

