#include<stdio.h>
#include<math.h>
int main()
{
    int n,x1,x2,x3;
    printf("Enter the number to calculate the powers : ");
    scanf("%d",&n);
    x1= pow(n,1);
    x2 = pow(n,2);
    x3 = pow(n,3);
    printf("The result of %d^1 is %d\n",n,x1);
    printf("The result of %d ^2 is %d\n",n,x2);
    printf("The result of %d ^3 is %d\n",n,x3);
}
