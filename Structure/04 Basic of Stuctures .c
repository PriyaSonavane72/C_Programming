#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Stud
{
    int RNo;
    char Name[20];
    float Per;
};

int main()
{
     struct Stud Std3;

     printf("\n Enter 3rd Student Info ");

     printf("\n Enter Roll No = ");
     scanf("%d",&Std3.RNo);

     fflush(stdin);

     printf("\n Enter Name = ");
    //scanf("%[^\n]",&Std3.Name);
     gets(Std3.Name);

     printf("\n Enter Percentage = ");
     scanf("%f",&Std3.Per);

     printf("\n  3rd Student Info is =>  ");

     printf("\n Roll Number = %d.",Std3.RNo);
     printf("\n Name        = %s.",Std3.Name);
     printf("\n Percentage  = %f.",Std3.Per);

     getch();
     return 0;

}
