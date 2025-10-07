#include <stdio.h>
int main()
{
    int n, i = 0;
    printf("Enter the upper value of the series. ");
    scanf("%d", &n);
    for (; i <= n;)
    {
        printf("%d\t", i);
        i = i + 2;
    }
    return 0;
}