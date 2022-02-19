#include<stdio.h>
main()
{
    int first=0,last=1,n,next,i;
    printf("Enter the number upto which fibinacci series will be shown : ");
    scanf("%d",&n);
    printf("%d %d",first,last);
    for(i=2;i<=n;i++)
    {
        next = first+last;
        printf(" %d",next);
        first=last;
        last=next;


    }
}
