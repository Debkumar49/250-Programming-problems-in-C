#include<stdio.h>
main()
{
    int year;
    printf("This program is to find the year is leap or not \n");
    printf("Enter the year : ");
    scanf("%d",&year);
    if((year%400==0)&&(year%4==0)|| (year%100!=0))
        printf("%d year is leap year.",year);
    else
        printf("%d Year is not leap year.",year);
}
