#include<stdio.h>
int main()
{
    printf("Enter the upper limit till which you want to print the sum of odd and even numbers.");
    int n,i,even_sum=0,odd_sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            even_sum=even_sum+i;
        }
        else
        {
            odd_sum=odd_sum+i;
        }
    }
    printf("The sum of even numbers from 1 to %d is %d.\n",n,even_sum);
    printf("The sum of odd numbers from 1 to %d is %d.\n",n,odd_sum);

    return 0;
}