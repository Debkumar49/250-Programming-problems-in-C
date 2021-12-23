/*Gross salary = Basic salary + dear allowance +house rent
house rent is 40% of basic salary
dearness allowance */
#include<stdio.h>
main()
{
    float gross_salary,hra,da,basic_salary;
    printf("Enter the basic salary : ");
    scanf("%f",&basic_salary);
    hra = ((basic_salary/100)*40);
    da = ((basic_salary/100)*50);
    gross_salary = basic_salary+hra+da;
    printf("\tGross salary = Basic salary + Dearness allowance(50%% of Basic Salary) + House rent(40%% of Basic Salary)\n\n");
    printf("The gross salary will be : %.2f ",gross_salary);
}
