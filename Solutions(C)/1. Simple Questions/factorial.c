#include<stdio.h>
main()
{
    int n,s=1,i;
    printf("Enter the number to find out factorial of number : ");
    scanf("%d",&n);
        if(n==0)
            {
                printf("The factorial of %d is  : 1",n);
            }
        else
            {
                for(i=1;i<=n;i++)
                {
                    s*=i;
                    printf("%d\n",s);
                }
                printf("The factorial of %d :  %d",n,s);
            }
}
