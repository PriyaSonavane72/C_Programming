#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct Product
{
    int PID;
    char PName;
    float PPrice;
    float PSPrice;
};

int main()
{
    struct Product PObj1 = {},PObj2 = {};


    printf("\n Enter 1st Product Details => \n ");

    printf("\n Enter Prodct ID = ");
    scanf("%d",&PObj1.PID);

    fflush(stdin);

    printf("\n Enter Product Name = ");
    scanf("%s",&PObj1.PName);

    fflush(stdin);

    printf("\n Enter Product Price = ");
    scanf("%f",&PObj1.PPrice);

    printf("\n Enter Product Salse Prise = ");
    scanf("%f",&PObj1.PSPrice);


    printf("\n Enter 2nd Product Details => \n ");

    printf("\n enter Prodct ID = ");
    scanf("%d",&PObj2.PID);

    fflush(stdin);

    printf("\n Enter Product Name = ");
    scanf("%s",&PObj1.PName);

    printf("\n Enter Product Price = ");
    scanf("%f",&PObj2.PPrice);

    printf("\n Enter Product Salse Prise = ");
    scanf("%f",&PObj2.PSPrice);

    getch();
    return 0;
}


