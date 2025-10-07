#include <stdio.h> 
int main() 
{
    int base,exponent;
    long long result=1; 
    printf("Enter the base number: ");
    scanf("%d",&base);

    printf("Enter the exponent: ");
    scanf("%d",&exponent);

    if (exponent==0) 
    {
        result=1;
    } 
    else if (exponent>0) 
    {
        for (int i=0;i<exponent;i++) 
        {
            result*=base;
        }
    } 
    else {
        for (int i=0;i<-exponent;i++) 
        {
            result*=base;
        }
    }

    printf("%d to the power %d is  %lld\n", base, exponent, result);

    return 0;
}