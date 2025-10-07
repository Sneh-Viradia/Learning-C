#include <stdio.h>
int main()
{
    int sales, commission;
    printf("Enter sales amount:");
    scanf("%d", &sales);
    if (sales <= 500)
    {
        commission = sales * 0.05;
        printf("Commission is %d", commission);
    }
    if (sales > 500 && sales <= 2000)
    {
        commission = 35 + (sales - 500) * 0.10;
        printf("Commission is %d", commission);
    }
    if (sales > 2000 && sales <= 5000)
    {
        commission = 185 + (sales - 2000) * 0.12;
        printf("Commission is %d", commission);
    }
    if (sales > 5000)
    {
        commission = sales * 0.125;
        printf("Commission is %d", commission);
    }

    return 0;
}