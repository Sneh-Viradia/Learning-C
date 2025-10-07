#include <stdio.h>
int main()
{
    int num, a, sum = 0, q;
    printf("Enter a number to check if it is an Armstrong number or not. ");
    scanf("%d", &num);
    a = num;
    while (num != 0)
    {
        q = num % 10;
        sum = sum + (q * q * q);
        num = num / 10;
    }
    if (sum == a)
    {
        printf("%d is an Armstrong number.", a);
    }
    else
    {
        printf("%d is not an Armstrong number.", a);
    }
    return 0;
}
