#include <stdio.h>
int main()
{
    int num, sum = 0, q;
    printf("Enter a number to find the sum of its digits. ");
    scanf("%d", &num);
    while (num != 0)
    {
        q = num % 10;
        sum = sum + q;
        num = num / 10;
    }
    printf("The sum of the digits of the number is %d.", sum);
    return 0;
}