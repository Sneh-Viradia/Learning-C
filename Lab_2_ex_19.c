#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character of the English Lexicon ");
    scanf("%c",&ch);

    if (ch>='z'&& ch<='a') 
	{
        printf("'%c' is a lowercase letter.",ch);

    }
    else
    {
        printf("%c is not a lowercase letter",ch);
    }

    return 0;
}