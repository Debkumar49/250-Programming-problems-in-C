#include<stdio.h>
#include<math.h>
main()
{
    int num,original_num,count=0,remainder;
    float result=0.0;
    printf("Enter the number to check , wheather it is amstrong or not ? : ");
    scanf("%d",&num);
    original_num = num;
    for(original_num = num;original_num!=0;++count)
    {
        original_num = original_num/10;
    }
    for(original_num=num;original_num!=0;original_num=original_num/10)
    {
        remainder = original_num %10;
        result = result+pow(remainder,count);
    }
    if((int)result==num)
        printf("%d is an Amstrong Number .",num);
    else
        printf("%d is not an Amstrong number.",num);
}
