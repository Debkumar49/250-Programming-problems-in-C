#include<stdio.h>
#include<math.h>
main()
{
    int lcm,hcf,i,n1,n2,min;
    printf("Enter the number : ");
    scanf("%d %d",&n1,&n2);
    min = (n1<n2)? n1:n2;
    for(i=1;i<=min;i++)
    {
        if(n1%i == 0 && n2%i == 0)
        {
            hcf = i;
        }
    }
    lcm = (n1*n2)/hcf;
    printf("The Lcm of %d & %d is : %d\n",n1,n2,lcm);
    printf("The hcf of %d & %d is : %d",n1,n2,hcf);
}
