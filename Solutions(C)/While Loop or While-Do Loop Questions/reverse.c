#include<stdio.h>
main()
{
    int num,rev=0,rem,temp=0;
    printf("Enter the Number to show reverse : ");
    scanf("%d",&num);
    temp = num;
    while(num!=0)
    {
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    printf("The reverse of the number %d is %d ",temp,rev);
}
