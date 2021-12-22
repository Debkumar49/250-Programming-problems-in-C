#include<stdio.h>
int main()
{
    float radius,area,circum,pi=3.14;
    int choice;
    printf("Enter the radius of the cicle : ");
    scanf("%f",&radius);
    while(1)
    {
    printf("\n--> Enter the 1 to calculate Area of circle \n--> Enter 2 to calculate Circumference of circle \n-->Enter 0 to quit \n--> Enter your choice : ");
    scanf("%d",&choice);
        switch(choice)
        {
            case 0:
                break;
            case 1:
                area = pi*radius*radius;
                printf("\nThe Area of the circle : %f",area);
                break;
            case 2:
                circum = 2*pi*radius;
                printf("\nThe Area of the circle : %f",circum);
                break;
            default:
                printf("\nPlease check the input  : ");

        }
    }
}
