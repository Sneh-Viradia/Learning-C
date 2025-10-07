#include <stdio.h>
int main()
{
    int num, sum = 0, q;
    printf("Enter a number to be reversed. ");
    scanf("%d", &num);
    while (num != 0)
    {
        q = num % 10;
        sum = sum * 10 + q;
        num = num / 10;
    }
    printf("The reverse of the number is %d.\n", sum);
    return 0;
}