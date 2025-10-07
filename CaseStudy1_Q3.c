#include<stdio.h>
int main()
{
    int n,temperary,count,digit;
    printf("Enter a number: ");
    scanf("%d",&n);
    temperary=n;
    count=0;
    if(n==0)
    {
        printf("0 \n");
    }
    while(temperary>0)
    {
        digit=temperary%10;
        temperary=temperary/10;
        if(digit!=0 && n%digit==0)
        {
            count++;
        }
    
    printf("The number of digits in %d that can divide %d is %d",n,n,count);
    return 0;
    }
}