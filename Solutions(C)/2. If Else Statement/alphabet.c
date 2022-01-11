#include<stdio.h>
main()
{
    char c;
    printf("Enter the character to check wheather it is alphabet or not : ");
    scanf("%c",&c);
    if((c>='a' && c<='z')||(c>='A' && c<='Z'))
    {
        printf("%c character is an alphabet",c);
    }
    else
    {
        printf("%c character is not an alphabet");
    }
}
