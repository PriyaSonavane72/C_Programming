#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 7, i = 0;

    printf("\n Reverse Table of %d is => \n",No);

    for(i =10; i >= 1; i--)
    {
        printf("\n %3d * %3d = %3d.", No,i,(i * No));
    }
    printf("\n\n==================***===================");

    getch();
    return 0;

}
