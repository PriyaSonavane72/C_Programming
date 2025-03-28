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
    struct Product PObj;

    PObj.PID = 21;
    strcpy(PObj.PName,"Book");
    PObj.PPrice = 100;
    PObj.PSPrice = 110;

    printf("\n Product ID is = %d.",PObj.PID);
    printf("\n Product Name is = %c.",PObj.PName);
    printf("\n product Purchase Prise is = %0.2f",PObj.PPrice);
    printf("\n Product Sales Prise is = %0.2f",PObj.PSPrice);

    getch();
    return 0;
}
