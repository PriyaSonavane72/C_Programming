#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct Product
{
    int PID;
    char PName[40];
    float PPrice;
    float PSPrice;
};

int main()
{
    struct Product PObj1 = {}, PObj2 = {};


    printf("\n \n 1st Product detail are => \n ");

    printf("\n Product ID is = %d.",PObj1.PID);
    printf("\n Product Name is = %c.",PObj1.PName);
    printf("\n product Purchase Prise is = %0.2f",PObj1.PPrice);
    printf("\n Product Sales Prise is = %0.2f",PObj1.PSPrice);

    printf("\n \n 2nd Product detail are => \n ");

    printf("\n Product ID is = %d.",PObj2.PID);
    printf("\n Product Name is = %c.",PObj2.PName);
    printf("\n product Purchase Prise is = %0.2f",PObj2.PPrice);
    printf("\n Product Sales Prise is = %0.2f",PObj2.PSPrice);

    getch();
    return 0;
};


