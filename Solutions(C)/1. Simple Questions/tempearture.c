#include<stdio.h>
main()
{
    float celcius,farenheit,result;
    int sw;
    printf("Enter 1 to input value in celcius \n Enter 2 to input value in Farenheit \n Enter 3 to exit Program \n");

    while(1)
    {
        result = 0.0;
        printf("\n\nEnter your choice : ");
        scanf("%d",&sw);
    switch(sw)
    {
    case 1:
        printf("Enter the value in celcius to convert it in farenheit : ");
        scanf("%f",&celcius);
        result = ((9*celcius/5)+32);
        printf("The value of farenheit : %.2f",result);
        break;
    case 2:
        printf("Enter the value in Farenheit to convert it in celcius : ");
        scanf("%f",&farenheit);
        result = ((5*farenheit-160)/9);
        printf("The value of farenheit : %.2f",result);
        break;
    case 3:
        exit(0);
        break;
    deafult:
        printf("Please Enter valid input ");
    }
    }
}
