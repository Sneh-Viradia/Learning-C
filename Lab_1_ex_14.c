#include <stdio.h>
int main() 
{
    char special_character;
    printf("Enter a character: ");
    scanf("%c", &special_character);
    if (special_character>='A'&&special_character<='Z') 
	{
        printf("'%c' is an uppercase letter.\n",special_character);
    }
    else if (special_character>='a'&&special_character<='z')
	{
        printf("'%c' is a lowercase letter.\n",special_character);
    }
    else if (special_character>='0'&&special_character<='9')
	{
        printf("'%c' is a digit.\n",special_character);
    }
    else 
	{
        printf("'%c' is a special symbol.\n",special_character);
    }

    return 0;
}

