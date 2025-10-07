#include <stdio.h>
int main()
{
    int num, flag = 0, b;
    printf("Enter a number to check if it is prime or not. ");
    scanf("%d", &num);
    for (b = 2; b <= num / 2; b++)
    {
        if (num % b == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is a prime number.", num);
    }
    else
    {
        printf("%d is a composite number.", num);
    }
    return 0;
}