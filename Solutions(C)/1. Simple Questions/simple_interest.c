#include<stdio.h>
void main()
{
    float simple_interest,principal,rate,time;
    printf("Enter the Principal value : ");
    scanf("%f",&principal);
    printf("Enter the rate of interest : ");
    scanf("%f",&rate);
    printf("Enter the time : ");
    scanf("%f",&time);
    simple_interest = principal*rate*time;
    printf("The Simple interest : %.3f",simple_interest);
}
/*Alternative Input process
    float simple_interest,principal,rate,time;
    printf("Enter the Principal value,rate of interest,time(principal rate time) : ");
    scanf("%f%f%f",&principal,&rate,&time);
    simple_interest = principal*rate*time;
    printf("The Simple interest : %.3f",simple_interest);

*/
