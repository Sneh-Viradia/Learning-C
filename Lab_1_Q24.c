#include<stdio.h>
int main()
{
    float x,n;
    printf("Enter the number for which you need to find the y value on graph. ");
    scanf("%f",&x);
    printf("Enter the value of n. ");
    scanf("%f",&n);
    if(n==1)
    {
        x++;
    }
    if(n==2)
    {
        x=(x/2)+1;
    }
    if(n==3)
    {
        x=1+(x*x*x);
    }
    if(n>3||n<1)
    {
        x=1+n*x;
    }

    printf("The value of y corresponding to the given 'x' and 'n' is %f.",x);

    return 0;
}