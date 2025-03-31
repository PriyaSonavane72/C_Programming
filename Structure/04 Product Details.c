#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Product
{
    int PID;
    char PName[40];
    float PPrice;
    float PSPrice;
};

int main()
{
    struct Product PObj1 = {22,"Pen",200,210},PObj2 = {};

    PObj2.PID = 21;
    strcpy(PObj2.PName,"Book");
    PObj2.PPrice = 100;
    PObj2.PSPrice = 110;

    printf("\n 1st Product Details => \n");

    printf("\n Product ID is = %d.",PObj1.PID);
    printf("\n Product Name is = %s.",PObj1.PName);
    printf("\n product Purchase Prise is = %0.2f",PObj1.PPrice);
    printf("\n Product Sales Prise is = %0.2f",PObj1.PSPrice);

    printf("\n ====================******=====================\n");

    printf("\n 2nd Product Detail => \n");

    printf("\n Product ID is = %d.",PObj2.PID);
    printf("\n Product Name is = %s.",PObj2.PName);
    printf("\n product Purchase Prise is = %0.2f",PObj2.PPrice);
    printf("\n Product Sales Prise is = %0.2f",PObj2.PSPrice);


    getch();
    return 0;
}
