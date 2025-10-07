#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=0,b=1,c=0,flag=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("The number is not part of Fibonacci series");
    }
    else
    {
        while(c<n)
        {
            c=a+b;
            a=b;
            b=c;
        }
        if(c==n)
        {
            printf("The number is part of Fibonacci series");
        }
        else
        {
            printf("The number is not part of Fibonacci series");
        }
    }

}