#include <stdio.h>
int main()
{
    int num, sum = 0, q;
    printf("Enter a number that is to be reduced to a single digit. ");
    scanf("%d", &num);
    while (num >= 10)
    {
        while (num != 0)
        {
            q = num % 10;
            sum = sum + q;
            num = num / 10;
        }
        num = sum;
        sum = 0;
    }
    printf("The final sum is %d", num);
    return 0;
}