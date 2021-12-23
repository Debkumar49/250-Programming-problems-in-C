#include<stdio.h>
main()
{

    char fname[20],mname[20],lname[20];
    printf("Enter the name (first middle last) : ");
    scanf("%s %s %s",&fname,&mname,&lname);
    printf("The abbreviated name  is : %c. %c. %s\n\n",fname[0],mname[0],lname);
}
