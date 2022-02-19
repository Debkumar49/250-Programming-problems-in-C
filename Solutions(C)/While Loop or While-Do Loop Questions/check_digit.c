#include<stdio.h>
main()
{
    int n,i,count=0;
    printf("Enter the number to check number of digit : ");
    scanf("%d",&n);
    for(i=n;i!=0;++count)
    {
        i=i/10;
    }
    printf("Number of digit : %d ",count);
}
