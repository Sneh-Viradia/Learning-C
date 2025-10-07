#include<stdio.h>
int main()
{
    int m,b,times,result;
    b=1;
    printf("Enter the number for which the table has to be printed.");
    scanf("%d",&m);
    for(;b<=12;b++)
    {
        result=(m*b);
        printf("%d into %d equals to %d.\n ",m,b,result);
    }
    return 0;
}