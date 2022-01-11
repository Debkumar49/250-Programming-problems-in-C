#include<stdio.h>
main()
{
    char ch;
    printf("Enter something to verify it's property : ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
        printf("Uppercase Alphabet");

    else if(ch>=97 && ch<=122)
        printf("Lowercase Alphabet");
    else if(ch>=48 && ch<=57)
        printf("It's a Number ");
    else
        printf("Symbol");
}
