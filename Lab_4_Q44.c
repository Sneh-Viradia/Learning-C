#include <stdio.h>
int main()
{
    int unit, bill;
    printf("Enter unit amount:");
    scanf("%d", &unit);
    if (unit <= 200)
    {
        bill = unit * 0.50;
        printf("Bill is %d", bill);
    }
    if (unit > 200 && unit <= 400)
    {
        bill = 100 + (unit - 200) * 0.65;
        printf("Bill is %d", bill);
    }
    if (unit > 400 && unit <= 600)
    {
        bill = 230 + (unit - 400) * 0.80;
        printf("Bill is %d", bill);
    }
    if (unit > 600)
    {
        bill = (unit * 01.25)+425;
        printf("Bill is %d", bill);
    }

    return 0;
}