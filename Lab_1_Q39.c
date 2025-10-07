#include<stdio.h>
int main()
{
    float n=0.00,i=1,j=1,q=1,sum=0.00;
    printf("Enter the upper limit of the series. ");
    scanf("%f",&n);
    for(;i<=n;i++)
    {
        for(;j<=i;j++)
        {
            q=q*j;
        }
        sum=sum+(1.00/q);
        q=1;
    }
    printf("%f",sum);

}
