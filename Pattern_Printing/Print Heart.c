#include<stdio.h>
#include<conio.h>

int main()
{
    int A , B, Size = 10;

    for(A = Size/2; A <= Size; A = A+2)
    {
        for(B = 1; B < Size-A; B = B+2)
            printf(" ");
        for(B = 1; B <= A; B++)
            printf("*");
        for(B = 1; B<= Size-A; B++)
            printf(" ");
        for(B = 1; B <= A-1; B++)
            printf("*");
        printf("\n");
    }
    for(A =Size; A >= 0; A--)
    {
        for(B = A;B < Size; B++)
            printf(" ");
        for(B = 1; B <=((A*2)-1);B++)
            printf("*");


            printf("\n");

    }

    getch();
    return 0;
}
